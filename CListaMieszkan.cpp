//
// Created by grzeg on 03.06.2022.
//

#include "CListaMieszkan.h"

void CListaMieszkan::utworzNoweMieszkanie(const CMieszkanie &m) {
    mListaM.push_back(m);
}

void CListaMieszkan::usunMieszkanie(int x) {
    mListaM.erase(mListaM.begin() + x - 1);
    cout << "Usunieto mieszkanie" << endl;  // debug do usuniecia
}

CMieszkanie *CListaMieszkan::outWskaznikMieszkania(int x) {
    return &mListaM[x];
}

int CListaMieszkan::outLiczbaElementow() {
    return mListaM.size();
}

