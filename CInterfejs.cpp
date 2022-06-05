//
// Created by grzeg on 03.06.2022.
//

#include "CInterfejs.h"

void CInterfejs::mainManu(CListaMieszkan *l) {
    int choice;
    do {
        cout << "Zarzadzanie lokalami\n\n"
             << "1 - Wczytaj mieszkanie\n"
             << "2 - Utworz nowe mieszkanie\n"
             << "3 - Wyswietl mieszkanie\n"
             << "4 - Usun mieszkanie\n"
             << "5 - Utworz nowy licznik\n\n"
             << "0 - Zamknij program\n"

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
                CDeserializer::wczytajMieszkanie(tmp);
                cout << "Wczytano mieszkanie" << endl;
                break;
            }
            case 2:  // Utworz nowe mieszkanie
            {
                CMieszkanie *tmp;
                tmp = l->utworzNoweMieszkanie();
                CInterfejs::wprowadzanieDanychM(tmp);
                CSerializer::zapiszMieszkanie(tmp);
                cout << "Utworzono mieszkanie" << endl;
                break;
            }

            case 3:  // Wyswietl mieszkanie
            {
                int p;
                cout << "Ktore mieszkanie wyswietlic?" << endl;
                cin >> p;
                CInterfejs::wyswietlanieDanychM(l->outWskaznikMieszkania(p));
                break;
            }

            case 4:  // Usun mieszkanie
            {
                int p;
                cout << "Ktore mieszkanie usunac?" << endl;
                cin >> p;
                l->usunMieszkanie(p);
                break;
            }

            case 0:
            {
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

void CInterfejs::manuLicznik(CMieszkanie *m) {
    int choice;
    do {
        cout << "Jaki licznik chcesz dodac?\n\n"
             << "1 - Licznik pradu\n"
             << "2 - Licznik wody\n"
             << "3 - Licznik gazu\n"
             << "0 - Wroc\n"

             << "Wybierz numer i wcisnij enter: ";

        while (!(cin >> choice)) //wymuszenie podania właściwych znaków
        {
            cout << "Podano zly znak. Prosze wybrac numer i wcisnac enter: ";
            cin.clear(); //kasowanie flagi błędu strumienia
            cin.sync(); //kasowanie zbędnych znaków z bufora
        }

        switch (choice) {
            case 1:  // Licznik pradu
            {
                CLicznikPradu Lpradu;
                CLicznik *wskaznik = &Lpradu;
                wskaznik = m->liczniki.utworzNowyLicznik();  // dafaqu

                cout << "Utworzono mieszkanie" << endl;
                break;
            }

            case 2:  // Licznik wody
            {
                break;
            }

            case 3:  // Licznik gazu
            {
                break;
            }

            case 0:
            {
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

void CInterfejs::wprowadzanieDanychLpradu(CLicznikPradu *lp) {
    string s;
    double x;
    cout << "Podaj numer licznika pradu:" << endl;
    cin >> s;
    lp->wporwadzDane(s);
    cout << "Podaj stan licznika prądu w kWh:" << endl;
    cin >> x;
    lp->podajStanLicznika(x);
}

void CInterfejs::wyswietlanieDanychLpradu(CLicznikPradu *lp) {
    cout << "Numer licznika pradu:" << lp->outNumerLicznika() << endl;
    cout << "Stan licznika prądu: " << lp->outStan()<< endl;
}

void CInterfejs::wprowadzanieDanychLwody(CLicznikWody *lw) {
    string s;
    double x;
    cout << "Podaj numer licznika wody:" << endl;
    cin >> s;
    lw->wporwadzDane(s);
    cout << "Podaj stan licznika wody w m3:" << endl;
    cin >> x;
    lw->podajStanLicznika(x);
}

void CInterfejs::wyswietlanieDanychLwody(CLicznikWody *lw) {
    cout << "Numer licznika wody:" << lw->outNumerLicznika() << endl;
    cout << "Stan licznika wody: " << lw->outStan()<< endl;
}


