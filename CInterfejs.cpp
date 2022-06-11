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

    // dodawanie danych taryfy
    double tx, ty, tz, ta, tb;
    cout << "Taryfa woda ciepla:";
    cin >> tx;
    cout << "Taryfa woda zimna:";
    cin >> ty;
    cout << "Taryfa gaz:";
    cin >> tz;
    cout << "Taryfa prad:";
    cin >> ta;
    cout << "Oplata najem:";
    cin >> tb;
    m->taryfa.wprowadzTaryfy(tx, ty, tz, ta, tb);

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

    // wyświetlanie danych taryfy
    cout << "Taryfa woda ciepla: " << m->taryfa.outTaryfaWodaCiepla() << endl;
    cout << "Taryfa woda zimna: " << m->taryfa.outTaryfaWodaZimna() << endl;
    cout << "Taryfa gaz: " << m->taryfa.outTaryfaGaz() << endl;
    cout << "Taryfa prad: " << m->taryfa.outTaryfaPrad() << endl;
    cout << "Oplata najem: " << m->taryfa.outTaryfaNajem() << endl;

}

void CInterfejs::wprowadzanieDanychL(CLicznik *l) {
    string n, p;
    cout << "Podaj nazwe licznika:";
    cin >> n;
    cout << "Podaj numer licznika:";
    cin >> p;
    l->podajDaneLicznika(n, p);
    CInterfejs::wprowadzenieOdczytuL(l);
}

void CInterfejs::wyswietlanieDanychL(CLicznik *l) {
    cout << "Licznik numer: " << l->outNumerLicznika() << endl;
    COdczyt tmpO = l->odczyty.outOdczyt(l->odczyty.outLiczbaElementow() - 1);
    cout << "Stan Licznika: " << tmpO.outStan() <<
         ", z dnia: " << tmpO.outData() << endl;
}

void CInterfejs::wprowadzenieOdczytuL(CLicznik *l) {
    string d;
    double x;
    cout << "Podaj stan licznika:";
    cin >> x;
    cout << "Podaj date:";
    cin >> d;
    COdczyt o;
    o.podajOdczyt(x, d);
    l->odczyty.dodajNowyOdczyt(o);
    cout << "Dodano odczyt" << endl;
}

void CInterfejs::mainManu() {
    int choice;
    do {
        cout << "Zarzadzanie lokalami\n\n"
             << "1 - Wyswietl liste mieszkan\n"
             << "2 - Utworz nowe mieszkanie\n"
             << "3 - Wczytaj mieszkanie\n"
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
                CMieszkanie *tmp;
                tmp = l->utworzNoweMieszkanie();
                CInterfejs::wprowadzanieDanychM(tmp);
                ser->zapiszMieszkanie(tmp);
                cout << "Utworzono mieszkanie" << endl;
                break;
            }

            case 3:  // Wczytaj mieszkanie
            {
                CMieszkanie *tmp;
                tmp = l->utworzNoweMieszkanie();
                dser->wczytajMieszkanie(tmp);
                cout << "Wczytano mieszkanie" << endl;
                break;
            }

            case 4  // Usun mieszkanie
                : {
                int p;
                cout << "Ktore mieszkanie usunac?" << endl;
                cin >> p;
                l->usunMieszkanie(p);
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
             << "3 - Dodaj nowy licznik\n\n"
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
                CInterfejs::wprowadzenieOdczytuL(wskL);
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
                } else if (tmpWybor == 1) {
//                    CLicznikWody Lw;
//                    l = &Lw;
                } else if (tmpWybor == 2) {
//                    CLicznikGazu Lg;
//                    l = &Lg;
                } else {
                    cout << "Podano zly numer" << endl;
                }
                CInterfejs::wprowadzanieDanychL(l);
                wskM->liczniki.dodajNowyLicznik(l);
            }

            case 0: {
                break;
            }
        }
    } while (choice != 0);
    return;
}



