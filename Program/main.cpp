#include <iostream>
#include "CLicznikGazu.h"
#include "CLicznikPradu.h"
#include "CLicznikWody.h"

using namespace std;

int main() {
    CLicznikGazu G1;
    G1.wprowadzDaneLicznika();
    G1.wyswietlDaneLicznika();
    G1.podajStanLicznika();
    G1.wyswietlDaneLicznika();

//    CLicznikPradu P1;
//    P1.wprowadzDaneLicznika();
//    P1.wyswietlDaneLicznika();
//
//    CLicznikWody W1;
//    W1.wprowadzDaneLicznika();
//    W1.wyswietlDaneLicznika();

    return 0;
}
