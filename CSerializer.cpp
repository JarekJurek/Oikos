//
// Created by grzeg on 03.06.2022.
//

#include "CSerializer.h"

void CSerializer::zapiszMieszkanie(CMieszkanie *m, int nrMieszkania) {
    string path = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\";
    path += "Mieszkanie" + to_string(nrMieszkania) + ".txt";  // tutaj nrMieszkania to de facto ilosc mieszkan
    ofstream plik(path);

    if (!plik.good()) {
        cout << "Problem z folderem mieszkaniowym" << endl;
        return;
    }

    // zapisywanie danych adresu
    plik << m->adres.outUlica() << endl;
    plik << m->adres.outNumerDomu() << endl;
    plik << to_string(m->adres.outNumerMieszkania()) << endl;
    plik << m->adres.outKodPocztowy() << endl;
    plik << m->adres.outMiasto() << endl;

    // zapisywanie danych: wartość i czynsz
    plik << to_string(m->outWartosc()) << endl;
    plik << to_string(m->outCzynsz()) << endl;

    plik.close();

    string path2 = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\iloscMieszkan.txt";
    ofstream plik2(path2);

    if (!plik.good()) {
        cout << "Problem z folderem mieszkaniowym" << endl;
        return;
    }

    plik2 << to_string(nrMieszkania + 1);
    plik2.close();

    return;
}

void CSerializer::usunMieszkanie(int nrMieszkania) {
    string fileName = "Mieszkanie" + to_string(nrMieszkania) + ".txt";
    int status = filesystem::remove(fileName);

    string path = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\iloscMieszkan.txt";
    ofstream plik(path);

    if (!plik.good()) {
        cout << "Problem z folderem mieszkaniowym" << endl;
        return;
    }

    plik << to_string(nrMieszkania - 1);
    plik.close();

    return;
}
