#include <iostream>
#include "CLicznikGazu.h"
#include "CLicznikPradu.h"
#include "CLicznikWody.h"

using namespace std;

int main() {
    CLicznikPradu G1;
    G1.wyswietlDaneLicznika();
    G1.wprowadzDaneLicznika();
    G1.wyswietlDaneLicznika();
    G1.podajStanLicznika();
    G1.wyswietlDaneLicznika();

    return 0;
}
