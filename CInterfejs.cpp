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
