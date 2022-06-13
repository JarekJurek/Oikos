//
// Created by grzeg on 03.06.2022.
//

#include "CInterfejs.h"

CInterfejs::CInterfejs() {
    CListaMieszkan *tmpL = new CListaMieszkan;
    l = tmpL;

    CSerializer *serTxt = new CSerializer;
    CSerializerAbstr *wskSer = serTxt;
    ser = wskSer;

    CDeserializer *dserTxt = new CDeserializer;
    CDeserializerAbstr *wskDser = dserTxt;
    dser = wskDser;
}

void CInterfejs::wprowadzanieDanychM(CMieszkanie *m) {
    cout << "*** Dodawanie mieszkania ***" << endl;

    // dodawanie danych adresu
    string q, w, r, t;
    int e;
    cout << "Ulica:";
    cin >> q;
    cout << "Numer domu:";
    cin >> w;
    cout << "Numer mieszkania:";
    cin >> e;
    cout << "Kod pocztowy:";
    cin >> r;
    cout << "Miasto:";
    cin >> t;
    m->adres.wprowadzAdres(q, w, e, r, t);

    // dodawanie danych: wartość i czynsz
    double mx, my;
    cout << "Wartosc:";
    cin >> mx;
    cout << "Czynsz do wspolnoty:";
    cin >> my;
    m->wprowadzDaneM(mx, my);
    cout << endl;
}

void CInterfejs::wyswietlanieDanychM(CMieszkanie *m) {
    cout << "*** Dane mieszkania ***" << endl;

    // wyświetlanie danych adresu
    cout << "Ulica: " << m->adres.outUlica() << endl;
    cout << "Numer domu: " << m->adres.outNumerDomu() << endl;
    cout << "Numer mieszkania: " << m->adres.outNumerMieszkania() << endl;
    cout << "Kod pocztowy: " << m->adres.outKodPocztowy() << endl;
    cout << "Miasto: " << m->adres.outMiasto() << endl;

    // wyświetlanie danych: wartość i czynsz
    cout << "Wartosc: " << m->outWartosc() << endl;
    cout << "Czynsz: " << m->outCzynsz() << endl;
}

void CInterfejs::wprowadzanieDanychL(CLicznik *l, int nrMieszkania) {
    string n;
    cout << "Podaj numer licznika:";
    cin >> n;
    l->podajDaneLicznika(n);
}

void CInterfejs::wyswietlanieDanychL(CLicznik *l) {
    cout << "Licznik numer: " << l->outNumerLicznika() << endl;
    COdczyt *tmpO = l->odczyty.outOdczyt(l->odczyty.outLiczbaElementow() - 1);
    cout << "Stan Licznika " << l->outTyp() << ": " << tmpO->outStan() << l->outJednostka() <<
         ", z dnia: " << tmpO->outData() << endl;
}

void CInterfejs::wprowadzenieOdczytuL(CLicznik *l, int nrLicznika, int nrMieszkania) {
    string d;
    double x;
    cout << "Podaj stan licznika:";
    cin >> x;
    cout << "Podaj date:";
    cin >> d;
    COdczyt o;
    o.podajOdczyt(x, d);
    l->odczyty.dodajNowyOdczyt(o);
    ser->zapiszOdczyt(&o, dser->podajIloscOdczytow(nrLicznika, nrMieszkania), nrLicznika, nrMieszkania);
    cout << "Dodano odczyt" << endl;
}

void CInterfejs::mainManu() {
    int choice;
    do {
        cout << "Zarzadzanie lokalami\n\n"
             << "1 - Wyswietl liste mieszkan\n"
             << "2 - Utworz nowe mieszkanie\n"
             << "3 - Wczytaj mieszkania\n"
             << "4 - Usun mieszkanie\n\n"
             << "0 - Zamknij program\n\n"

             << "Wybierz numer i wcisnij enter:";

        while (!(cin >> choice)) //wymuszenie podania właściwych znaków
        {
            cout << "Podano zly znak. Prosze wybrac numer i wcisnac enter:";
            cin.clear(); //kasowanie flagi błędu strumienia
            cin.sync(); //kasowanie zbędnych znaków z bufora
        }

        switch (choice) {
            case 1  // Wyswietl liste mieszkan
                : {
                CInterfejs::pokazListeM();
                break;
            }

            case 2:  // Utworz nowe mieszkanie
            {
                CMieszkanie tmp;
                CInterfejs::wprowadzanieDanychM(&tmp);
                l->utworzNoweMieszkanie(tmp);
                ser->zapiszMieszkanie(&tmp, dser->podajIloscMieszkan());
                cout << "Utworzono mieszkanie" << endl;
                break;
            }

            case 3:  // Wczytaj mieszkania
            {
                for (int i = 0; i < dser->podajIloscMieszkan(); i++) {
                    CMieszkanie tmp;
                    dser->wczytajMieszkanie(&tmp, i);
                    for (int j = 0; j < dser->podajIloscLicznikow(i); j++) {
                        CLicznik *tmpL;
                        dser->wczytajLicznik(tmpL, j, i);
                        for (int k=0; k<dser->podajIloscOdczytow(j,i); k++){
                            COdczyt tmpO;
                            dser->wczytajOdczyt(&tmpO, k, j, i);
                            tmpL->odczyty.dodajNowyOdczyt(tmpO);
                        }
                        tmp.liczniki.dodajNowyLicznik(tmpL);
                    }
                    l->utworzNoweMieszkanie(tmp);
                }
                break;
            }

            case 4  // Usun mieszkanie
                : {
                int p;
                cout << "Ktore mieszkanie usunac?" << endl;
                cin >> p;
                l->usunMieszkanie(p);  // usuniecie z listy
                for (int i = 0; i < dser->podajIloscMieszkan(); i++) {  // usuniecie wszystkich mieszkan
                    ser->usunMieszkanie(i);
                }
                for (int i = 0; i < l->outLiczbaElementow(); i++) {  // zapisanie wszystkich mieszkan
                    ser->zapiszMieszkanie(l->outWskaznikMieszkania(i), i);
                }
                break;
            }

            case 0: {
                cout << endl << "Zamykanie programu \n" << endl;
                break;
            }

            default:
                cout << "Wybrano zly numer. Prosze wybrac ponownie" << endl;
                sleep(1.5);
                system("cls");
                break;
        }

    } while (choice != 0);
    return;
}

void CInterfejs::pokazListeM() {
    if (l->outLiczbaElementow() == 0) {
        cout << "Brak mieszkan w programie" << endl;
        return;
    }
    int nrMieszkania;
    CMieszkanie *tmp;
    for (int i = 0; i < l->outLiczbaElementow(); i++) {
        tmp = l->outWskaznikMieszkania(i);
        cout << "--------------------" << endl;
        cout << "Mieszknie nr: " << i << endl;
        CInterfejs::wyswietlanieDanychM(tmp);
        cout << "--------------------" << endl;
    }
    int choice;
    do {
        cout << "1 - Pokaz liczniki mieszkania\n"
             << "2 - Podaj stan licznika\n"
             << "3 - Dodaj nowy licznik\n"
             << "4 - Podlicz mieszkanie \n\n"
             << "0 - Wroc\n\n"
             << "Wybierz numer i wcisnij enter:";

        while (!(cin >> choice)) //wymuszenie podania właściwych znaków
        {
            cout << "Podano zly znak. Prosze wybrac numer i wcisnac enter:";
            cin.clear(); //kasowanie flagi błędu strumienia
            cin.sync(); //kasowanie zbędnych znaków z bufora
        }
        switch (choice) {
            case 1:  // Pokaz liczniki mieszkania
            {
                cout << "Wybierz mieszkanie:";
                cin >> nrMieszkania;
                CMieszkanie *wskM;
                wskM = l->outWskaznikMieszkania(nrMieszkania);

                if (wskM->liczniki.outLiczbaElementow() == 0) {
                    cout << "Brak licznikow" << endl;
                    break;
                }

                CLicznik *wskL;
                for (int i = 0; i < wskM->liczniki.outLiczbaElementow(); i++) {
                    wskL = wskM->liczniki.outWskaznikLicznika(i);
                    cout << "--------------------" << endl;
                    cout << i << ".:" << endl;
                    CInterfejs::wyswietlanieDanychL(wskL);
                    cout << "--------------------" << endl;
                }
                break;
            }

            case 2:  // Podaj stan licznika
            {
                cout << "Wybierz mieszkanie:";
                cin >> nrMieszkania;
                CMieszkanie *wskM;
                wskM = l->outWskaznikMieszkania(nrMieszkania);

                if (wskM->liczniki.outLiczbaElementow() == 0) {
                    cout << "Brak licznikow" << endl;
                    break;
                }
                CLicznik *wskL;
                for (int i = 0; i < wskM->liczniki.outLiczbaElementow(); i++) {
                    wskL = wskM->liczniki.outWskaznikLicznika(i);
                    cout << "--------------------" << endl;
                    cout << i << ".:" << endl;
                    CInterfejs::wyswietlanieDanychL(wskL);
                    cout << "--------------------" << endl;
                }
                int nrLicznika;
                cout << "Wybierz Licznik:";
                cin >> nrLicznika;
                wskL = wskM->liczniki.outWskaznikLicznika(nrLicznika);
                CInterfejs::wprowadzenieOdczytuL(wskL, nrLicznika, nrMieszkania);
                break;
            }

            case 3:  // Dodaj nowy licznik
            {
                cout << "Wybierz mieszkanie:";
                cin >> nrMieszkania;
                CMieszkanie *wskM;
                wskM = l->outWskaznikMieszkania(nrMieszkania);

                int tmpWybor;
                CLicznik *l;
                cout << "Jaki licznik chcesz dodac?" << endl;
                cout << "Licznik pradu (0), Licznik wody (1), Licznik Gazu (2)" << endl;
                cout << "Wybierz opcje:";
                cin >> tmpWybor;
                if (tmpWybor == 0) {
                    CLicznikPradu *Lp = new CLicznikPradu;
                    l = Lp;
                    wprowadzanieDanychL(l, nrMieszkania);
                    wprowadzanieDanychLPradu(l);
                    int nrLicznika = dser->podajIloscLicznikow(nrMieszkania);
                    ser->zapiszLicznik(l, nrLicznika, nrMieszkania);
                    wprowadzenieOdczytuL(l, nrLicznika, nrMieszkania);
                    wskM->liczniki.dodajNowyLicznik(l);
                } else if (tmpWybor == 1) {
//                    CLicznikWody Lw;
//                    l = &Lw;
                } else if (tmpWybor == 2) {
//                    CLicznikGazu Lg;
//                    l = &Lg;
                } else {
                    cout << "Podano zly numer" << endl;
                    break;
                }
                break;
            }
            case 4: {
                cout << "Wybierz mieszkanie do rozliczenia:";
                cin >> nrMieszkania;
                CMieszkanie *wskM;
                wskM = l->outWskaznikMieszkania(nrMieszkania);

                if (wskM->liczniki.outLiczbaElementow() == 0) {
                    cout << "Brak licznikow" << endl;
                    break;
                }
                wskM->rachunek.zerujRachunek();
                CLicznik *wskL;
                COdczyt *odczytStary;
                COdczyt *odczytNowy;
                int iloscMiesiecy;
                double zuzycie;
                cout << "Podaj ilosc miesiecy:" << endl;
                cin >> iloscMiesiecy;
                for (int i = 0; i < wskM->liczniki.outLiczbaElementow(); i++) {
                    wskL = wskM->liczniki.outWskaznikLicznika(i);
                    if (wskL->odczyty.outLiczbaElementow() < 2) {
                        cout << "Za malo odczytow dla licznika nr: " << wskL->outNumerLicznika()
                             << ". Wymagane minimum dwa." << endl;
                        break;
                    }
                    odczytStary = wskL->odczyty.outOdczyt(wskL->odczyty.outLiczbaElementow() - 2);
                    odczytNowy = wskL->odczyty.outOdczyt(wskL->odczyty.outLiczbaElementow() - 1);
                    zuzycie = odczytNowy->outStan() - odczytStary->outStan();

                    string typ = wskL->outTyp();
                    if (typ == "pradu") {
                        wskM->rachunek.oplataZuzycia(zuzycie, wskL->outTaryfaZuzycia());
                        wskM->rachunek.oplataMiesieczna(wskL->outTaryfaMiesieczna(), iloscMiesiecy);
                    } else if (typ == "wodyZ") {
//                        wskM->rachunek.oplataZuzycia(zuzycie, wskL->outTaryfaZuzycia());
//                        wskM->rachunek.oplataMiesieczna(wskL->outTaryfaMiesieczna(), iloscMiesiecy);
                    } else if (typ == "wodyC") {

                    }

                }
                cout << "Razem do zaplaty: " << wskM->rachunek.outSumaOplat() << "zl" <<endl;
                break;
            }

            case 0: {
                break;
            }
        }
    } while (choice != 0);
    return;
}

void CInterfejs::wprowadzanieDanychLPradu(CLicznik *l) {
    double x, y;
    cout << "Podaj taryfe miesieczna:";
    cin >> x;
    cout << "Podaj taryfe zuzycia:";
    cin >> y;
    l->podajTaryfy(x, y);
}

