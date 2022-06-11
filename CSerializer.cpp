//
// Created by grzeg on 03.06.2022.
//

#include "CSerializer.h"

void CSerializer::zapiszMieszkanie(CMieszkanie *m) {
    string path = R"(C:\Users\grzeg\Documents\Studia\Semestr 6\PJC\Oikos\mieszkania.txt)";
    ofstream plik(path);

    if (!plik.good()) {
        cout << "Problem z folderem mieszkaniowym" << endl;
        return;
    }

    // zapisywanie danych adresu
    plik << m->adres.outUlica() << endl;
    plik << m->adres.outNumerDomu() << endl;
    plik << to_string(m->adres.outNumerMieszkania()) << endl;
    plik << m->adres.outKodPocztowy() << endl;
    plik << m->adres.outMiasto() << endl;

    // zapisywanie danych: wartość i czynsz
    plik << to_string(m->outWartosc()) << endl;
    plik << to_string(m->outCzynsz()) << endl;

    // zapisywanie danych taryfy
//    plik << to_string(m->taryfa.outTaryfaWodaCiepla()) << endl;
//    plik << to_string(m->taryfa.outTaryfaWodaZimna()) << endl;
//    plik << to_string(m->taryfa.outTaryfaGaz()) << endl;
//    plik << to_string(m->taryfa.outTaryfaPrad()) << endl;
//    plik << to_string(m->taryfa.outTaryfaNajem()) << endl;

//    // licznik pradu
//    plik << m->lprad.outNumerLicznika() << endl;
//    plik << m->lgaz.outNumerLicznika() << endl;
//    plik << m->lwodaCiepla.outNumerLicznika() << endl;
//    plik << m->lwodaZimna.outNumerLicznika() << endl;

    plik.close();
    return;
}
