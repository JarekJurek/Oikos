//
// Created by grzeg on 03.06.2022.
//

#include "CListaMieszkan.h"

void CListaMieszkan::utworzNoweMieszkanie() {
    CMieszkanie m;
    inter.wprowadzanieDanychM(&m);
    mListaM.push_back(&m);
    cout << "Dodano mieszkanie" << endl;
}

void CListaMieszkan::usunMieszkanie(CMieszkanie *m) {
    mListaM.erase(remove(mListaM.begin(), mListaM.end(), m), mListaM.end());
    cout << "Usunieto mieszkanie" << endl;
}
