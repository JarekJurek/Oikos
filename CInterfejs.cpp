//
// Created by grzeg on 03.06.2022.
//

#include "CInterfejs.h"

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
    cout << endl;

}

void CInterfejs::mainManu(CListaMieszkan *l) {
    int choice;
    do {
        cout << "Zarzadzanie lokalami\n\n"
             << "1 - Wczytaj mieszkanie\n"
             << "2 - Utworz nowe mieszkanie\n"
             << "3 - Wyswietl mieszkanie\n"
             << "4 - Wyswietl liste mieszkan\n"
             << "5 - Usun mieszkanie\n\n"
             << "0 - Zamknij program\n\n"

             << "Wybierz numer i wcisnij enter: ";

        while (!(cin >> choice)) //wymuszenie podania właściwych znaków
        {
            cout << "Podano zly znak. Prosze wybrac numer i wcisnac enter: ";
            cin.clear(); //kasowanie flagi błędu strumienia
            cin.sync(); //kasowanie zbędnych znaków z bufora
        }

        switch (choice) {
            case 1:  // Wczytaj mieszkanie
            {
                CMieszkanie *tmp;
                tmp = l->utworzNoweMieszkanie();
                CDeserializer dserTxt;
                CDeserializerAbstr *wskDser = &dserTxt;
                wskDser->wczytajMieszkanie(tmp);
                cout << "Wczytano mieszkanie" << endl;
                break;
            }
            case 2:  // Utworz nowe mieszkanie
            {
                CMieszkanie *tmp;
                tmp = l->utworzNoweMieszkanie();
                CInterfejs::wprowadzanieDanychM(tmp);
                CSerializer serTxt;
                CSerializerAbstr *wskSer = &serTxt;
                wskSer->zapiszMieszkanie(tmp);
                cout << "Utworzono mieszkanie" << endl;
                break;
            }

            case 3  // Wyswietl mieszkanie
                : {
                int p;
                cout << "Ktore mieszkanie wyswietlic?" << endl;
                cin >> p;
                CMieszkanie *tmp = l->outWskaznikMieszkania(p);
                CInterfejs::wyswietlanieDanychM(tmp);
                if(tmp->liczniki.outLiczbaElementow() != 0) {
//                    CLicznik *wsk = tmp->liczniki.outWskaznikLicznika(0);
//                    CInterfejs::wyswietlanieDanychLpradu(wsk);
                    cout << "YO" << endl;
                }else{
                    CLicznikPradu lPradu;
                    CInterfejs::wprowadzanieDanychLpradu(&lPradu);
                    CLicznik *tmpL = &lPradu;
                    tmp->liczniki.dodajNowyLicznik(tmpL);
                }
                // tutaj mozliwość edycji licznikow
                break;
            }

            case 4  // Wyswietl liste mieszkan
                : {
                CInterfejs::pokazListeM(l);
                break;
            }

            case 5  // Usun mieszkanie
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

void CInterfejs::pokazListeM(CListaMieszkan *l) {
    CMieszkanie *tmp;
    for(int i = 0; i < l->outLiczbaElementow(); i++){
        tmp = l->outWskaznikMieszkania(i);
        cout << "--------------------" << endl;
        cout << "Mieszknie nr: " << i << endl;
        CInterfejs::wyswietlanieDanychM(tmp);
        cout << "--------------------" << endl;
    }
    int choice;
    do {
        cout << "0 - Wroc\n\n"

             << "Wybierz numer i wcisnij enter: ";

        while (!(cin >> choice)) //wymuszenie podania właściwych znaków
        {
            cout << "Podano zly znak. Prosze wybrac numer i wcisnac enter: ";
            cin.clear(); //kasowanie flagi błędu strumienia
            cin.sync(); //kasowanie zbędnych znaków z bufora
        }
    } while (choice != 0);
    return;
}

void CInterfejs::wprowadzanieDanychLpradu(CLicznikPradu *lp) {
    string s;
    double x;
    cout << "Podaj numer licznika:" << endl;
    cin >> s;
    cout << "Podaj stan licznika w kWh:" << endl;
    cin >> x;
    lp->podajDaneLicznika(s, x);
}

void CInterfejs::wyswietlanieDanychLpradu(CLicznikPradu *lp) {
    cout << "Numer licznika:" << lp->outNumerLicznika() << endl;
    cout << "Stan licznika: " << lp->outStanLicznika()<< endl;
}


