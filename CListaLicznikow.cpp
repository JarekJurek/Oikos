//
// Created by grzeg on 05.06.2022.
//

#include "CListaLicznikow.h"

CLicznik *CListaLicznikow::utworzNowyLicznik(vector<CLicznik *> listaL) {
    CLicznik *l = new CLicznik;
    listaL.push_back(l);
    return l;
}

void CListaLicznikow::usunLicznik(int x, vector<CLicznik *> listaL) {
    listaL.erase(remove(listaL.begin(), listaL.end(), listaL[x]), listaL.end());
    cout << "Usunieto mieszkanie" << endl;  // debug do usuniecia
}

CLicznik *CListaLicznikow::outWskaznikLicznika(int x, vector<CLicznik *> listaL) {
    return listaL[x];
}
