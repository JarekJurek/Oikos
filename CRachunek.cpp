//
// Created by grzeg on 30.05.2022.
//

#include "CRachunek.h"

CRachunek::CRachunek(float a, float b, float c, float d, float e) {
    oplataWodaCiepla = a;
    oplataWodaZimna = b;
    oplataGaz = c;
    oplataPrad = d;
    oplataNajem = e;
}

void CRachunek::obliczOplaty(CMieszkanie *m, CTaryfa *t, COdczyt *o) {
    t = &m->taryfa;

    o = &m->lwodaCiepla.odczyt;  // odczyt z licznika wody
    oplataWodaCiepla = t->outTaryfaWodaCiepla() * o->outStan();

    o = &m->lwodaZimna.odczyt;  // odczyt z licznika wody
    oplataWodaZimna = t->outTaryfaWodaZimna() * o->outStan();

    o = &m->lgaz.odczyt;  // odczyt z licznika gazu
    oplataGaz = t->outTaryfaGaz() * o->outStan();

    o = &m->lprad.odczyt;  // odczyt z licznika prądu
    oplataPrad = t->outTaryfaPrad() * o->outStan();

    oplataNajem = t->outTaryfaNajem() * m->outCzynsz();
}

float CRachunek::sumaRachunku() {
    return oplataGaz + oplataNajem + oplataPrad + oplataWodaCiepla + oplataWodaZimna;
}

void CRachunek::wyswietlRachunek() {
    cout << "Opłata woda ciepla: " << oplataGaz << endl;
    cout << "Opłata woda zimna: " << oplataGaz << endl;
    cout << "Opłata prad: " << oplataGaz << endl;
    cout << "Opłata gaz: " << oplataGaz << endl;
    cout << "Opłata najem: " << oplataGaz << endl;
    cout << "Do zapłaty razem: " << sumaRachunku() << endl;

}
