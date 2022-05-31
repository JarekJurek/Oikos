//
// Created by grzeg on 31.05.2022.
//

#include "CZapis.h"

//void CZapis::zapiszMieszkanie(CMieszkanie *m, string path) {
//    ofstream plik(path);
//
//    if (!plik.good()) {
//        cout << "Problem z folderem mieszkaniowym" << endl;
//        return;
//    }
//
//    plik << to_string(m->outWartosc()) << endl;
//    plik << to_string(m->outCzynsz()) << endl;
//
//    // adres
//    plik << m->adres.outUlica() << endl;
//    plik << m->adres.outNumerDomu() << endl;
//    plik << to_string(m->adres.outNumerMieszkania()) << endl;
//    plik << m->adres.outKodPocztowy() << endl;
//    plik << m->adres.outMiasto() << endl;
//
//    // taryfa
//    plik << to_string(m->taryfa.outTaryfaWodaCiepla()) << endl;
//    plik << to_string(m->taryfa.outTaryfaWodaZimna()) << endl;
//    plik << to_string(m->taryfa.outTaryfaGaz()) << endl;
//    plik << to_string(m->taryfa.outTaryfaPrad()) << endl;
//    plik << to_string(m->taryfa.outTaryfaNajem()) << endl;
//
//    // licznik pradu
//    plik << m->lprad.outNumerLicznika() << endl;
//    plik << m->lgaz.outNumerLicznika() << endl;
//    plik << m->lwodaCiepla.outNumerLicznika() << endl;
//    plik << m->lwodaZimna.outNumerLicznika() << endl;
//
//    plik.close();
//    return;
//}
//
//
//void CZapis::wczytajMieszkanie(CMieszkanie *m, string path) {
//    ofstream plik(path);
//
//    if (!plik.good()) {
//        cout << "Problem z folderem mieszkaniowym" << endl;
//        return;
//    }
//
//    plik << to_string(m->outWartosc());
//    plik << to_string(m->outCzynsz());
//
//    // adres
//    plik << m->adres.outUlica();
//    plik << m->adres.outNumerDomu();
//    plik << to_string(m->adres.outNumerMieszkania());
//    plik << m->adres.outKodPocztowy();
//    plik << m->adres.outMiasto();
//
//    // taryfa
//    plik << to_string(m->taryfa.outTaryfaWodaCiepla());
//    plik << to_string(m->taryfa.outTaryfaWodaZimna());
//    plik << to_string(m->taryfa.outTaryfaGaz());
//    plik << to_string(m->taryfa.outTaryfaPrad());
//    plik << to_string(m->taryfa.outTaryfaNajem());
//
//    // licznik pradu
//    plik << m->lprad.outNumerLicznika();
//    plik << m->lgaz.outNumerLicznika();
//    plik << m->lwodaCiepla.outNumerLicznika();
//    plik << m->lwodaZimna.outNumerLicznika();
//
//    plik.close();
//    return;
//}