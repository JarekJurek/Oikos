//
// Created by grzeg on 03.06.2022.
//

#include "CInterfejs.h"

void CInterfejs::wprowadzanieDanychM(CMieszkanie *m) {
    cout << "Dodawanie mieszkania" << endl;

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

    // dodawanie danych wartość i czynsz
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
    cout << "Taryfa najem:";
    cin >> tb;
    cout << endl;
    m->taryfa.wprowadzTaryfy(tx, ty, tz, ta, tb);

}
