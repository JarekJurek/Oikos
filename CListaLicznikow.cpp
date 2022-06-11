//
// Created by grzeg on 06.06.2022.
//

#include "CListaLicznikow.h"

void CListaLicznikow::dodajNowyLicznik(CLicznik *l) {
    mListaL.push_back(l);
}

void CListaLicznikow::usunLicznik(int x) {
    mListaL.erase(mListaL.begin() + x - 1);
    cout << "Usunieto licznik" << endl;  // debug do usuniecia
}

CLicznik *CListaLicznikow::outWskaznikLicznika(int x) {
    return mListaL[x];
}

int CListaLicznikow::outLiczbaElementow() {
    return mListaL.size();
}
