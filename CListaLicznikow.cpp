//
// Created by grzeg on 05.06.2022.
//

#include "CListaLicznikow.h"

CLicznik *CListaLicznikow::dodajNowyLicznik(CLicznik *l) {
    listaL.push_back(l);
    return l;
}

void CListaLicznikow::usunLicznik(int x) {
    listaL.erase(remove(listaL.begin(), listaL.end(), listaL[x]), listaL.end());
    cout << "Usunieto licznik" << endl;  // debug do usuniecia
}

CLicznik *CListaLicznikow::outWskaznikLicznika(int x) {
    return listaL[x];
}
