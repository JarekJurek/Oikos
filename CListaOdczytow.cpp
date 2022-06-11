//
// Created by grzeg on 08.06.2022.
//

#include "CListaOdczytow.h"

void CListaOdczytow::dodajNowyOdczyt(const COdczyt &l) {
    mListaO.push_back(l);
}

void CListaOdczytow::usunOdczyt(int x) {
    mListaO.erase(mListaO.begin() + x - 1);
    cout << "Usunieto odczyt" << endl;  // debug do usuniecia
}

COdczyt CListaOdczytow::outOdczyt(int x) {
    return mListaO[x];
}

int CListaOdczytow::outLiczbaElementow() {
    return mListaO.size();
}
