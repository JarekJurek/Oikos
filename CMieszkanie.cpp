//
// Created by grzeg on 23.05.2022.
//

#include "CMieszkanie.h"

CMieszkanie::CMieszkanie(double x, double y) {
    wartosc = x;
    czynsz = y;
}

void CMieszkanie::wprowadzDaneM(double x, double y) {
    wartosc = x;
    czynsz = y;
}

double CMieszkanie::outCzynsz() {
    return czynsz;
}

double CMieszkanie::outWartosc() {
    return wartosc;
}
