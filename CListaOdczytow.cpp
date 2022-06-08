//
// Created by grzeg on 08.06.2022.
//

#include "CListaOdczytow.h"

void CListaOdczytow::dodajNowyOdczyt(COdczyt *l) {
    mListaO.push_back(l);
}

void CListaOdczytow::usunOdczyt(int x) {
    mListaO.erase(remove(mListaO.begin(), mListaO.end(), mListaO[x]), mListaO.end());
    cout << "Usunieto licznik" << endl;  // debug do usuniecia
}

COdczyt *CListaOdczytow::outWskaznikOdczyt(int x) {
    return mListaO[x];
}

int CListaOdczytow::outLiczbaElementow() {
    return mListaO.size();
}