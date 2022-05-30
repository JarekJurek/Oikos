//
// Created by grzeg on 30.05.2022.
//

#include "CTaryfa.h"

CTaryfa::CTaryfa(float x, float y, float z, float a, float b) {
    taryfaWodaCiepla = x;
    taryfaWodaZimna = y;
    taryfaGaz = z;
    taryfaPrad = a;
    taryfaNajem = b;
}

void CTaryfa::wprowadzTaryfy() {
    cout << "Taryfa woda ciepla:";
    cin >> taryfaWodaCiepla;
    cout << "taryfa Woda Zimna:";
    cin >> taryfaWodaZimna;
    cout << "taryfa Gaz:";
    cin >> taryfaGaz;
    cout << "taryfa Prad:";
    cin >> taryfaPrad;
    cout << "taryfa Najem:";
    cin >> taryfaNajem;
    cout << endl;
}

void CTaryfa::wyswietlTaryfy() {
    cout << "Taryfa woda ciepla: " << taryfaWodaCiepla << endl;
    cout << "taryfa Woda Zimna: " << taryfaWodaZimna << endl;
    cout << "taryfa Gaz: " << taryfaGaz << endl;
    cout << "taryfa Prad: " << taryfaPrad << endl;
    cout << "taryfa Najem: " << taryfaNajem << endl;
    cout << endl;
}
