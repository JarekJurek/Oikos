//
// Created by grzeg on 03.06.2022.
//

#include "CListaMieszkan.h"

void CListaMieszkan::utworzNoweMieszkanie() {
    CMieszkanie *m = new CMieszkanie;
    minter.wprowadzanieDanychM(m);
    mListaM.push_back(m);
    cout << "Dodano mieszkanie" << endl;  // debug do usuniecia
}

void CListaMieszkan::wczytajDaneMieszkania() {
    CMieszkanie *m = new CMieszkanie;
    mdeserialize.wczytajMieszkanie(m);
    mListaM.push_back(m);
    cout << "Wczytano mieszkanie" << endl;  // debug do usuniecia
}

void CListaMieszkan::usunMieszkanie(CMieszkanie *m) {
    mListaM.erase(remove(mListaM.begin(), mListaM.end(), m), mListaM.end());
    cout << "Usunieto mieszkanie" << endl;  // debug do usuniecia
}

void CListaMieszkan::wyswietlDaneMieszkania(int x) {
    minter.wyswietlanieDanychM(mListaM[x]);
}

void CListaMieszkan::zapiszDaneMieszkania(int x) {
    mserialize.zapiszMieszkanie(mListaM[x]);
}




