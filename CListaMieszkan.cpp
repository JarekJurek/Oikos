//
// Created by grzeg on 03.06.2022.
//

#include "CListaMieszkan.h"

CMieszkanie *CListaMieszkan::utworzNoweMieszkanie() {
    CMieszkanie *m = new CMieszkanie;
    mListaM.push_back(m);
    return m;
}

void CListaMieszkan::usunMieszkanie(int x) {
    mListaM.erase(remove(mListaM.begin(), mListaM.end(), mListaM[x]), mListaM.end());
    cout << "Usunieto mieszkanie" << endl;  // debug do usuniecia
}

CMieszkanie *CListaMieszkan::outWskaznikMieszkania(int x) {
    return mListaM[x];
}

int CListaMieszkan::outLiczbaElementow() {
    return mListaM.size();
}




