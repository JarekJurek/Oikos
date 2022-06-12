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
        cout << "Problem z folderem mieszkaniowym iloscMieszkan" << endl;
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
        cout << "Problem z folderem mieszkaniowym iloscMieszkan" << endl;
        return;
    }

    plik << to_string(nrMieszkania - 1);
    plik.close();

    return;
}

void CSerializer::zapiszLicznik(CLicznik *l, int nrLicznika, int nrMieszkania) {
    string path = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\";
    path += "Mieszkanie" + to_string(nrMieszkania) + "Licznik" + to_string(nrLicznika) + ".txt";
    ofstream plik(path);

    if (!plik.good()) {
        cout << "Problem z folderem licznikowym" << endl;
        return;
    }

    // zapisywanie danych adresu
    plik << l->outTyp() << endl;
    plik << l->outNumerLicznika() << endl;
    plik << l->outTaryfaMiesieczna() << endl;
    plik << l->outTaryfaZuzycia() << endl;

    plik.close();

    string path2 = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\";
    path2 += "iloscLicznikowMieszkanie" + to_string(nrMieszkania) + ".txt";
    ofstream plik2(path2);

    if (!plik.good()) {
        cout << "Problem z folderem licznikowym iloscLicznikowMieszkanie" << endl;
        return;
    }

    plik2 << to_string(nrLicznika + 1);
    plik2.close();

    return;
}

void CSerializer::usunLicznik(int nrLicznika, int nrMieszkania) {
    string fileName = "Mieszkanie" + to_string(nrMieszkania) + "Licznik" + to_string(nrLicznika) + ".txt";
    int status = filesystem::remove(fileName);

    string path = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\";
    path += "iloscLicznikowMieszkanie" + to_string(nrMieszkania) + ".txt";
    ofstream plik(path);

    if (!plik.good()) {
        cout << "Problem z folderem mieszkaniowym iloscMieszkan" << endl;
        return;
    }

    plik << to_string(nrLicznika - 1);
    plik.close();

    return;
}

void CSerializer::zapiszOdczyt(COdczyt *o, int nrOdczytu, int nrLicznika, int nrMieszkania) {
    string path = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\";
    path += "Mieszkanie" + to_string(nrMieszkania) + "Licznik" + to_string(nrLicznika) + "Odczyt" + to_string(nrOdczytu) + ".txt";
    ofstream plik(path);

    if (!plik.good()) {
        cout << "Problem z folderem odczytowym" << endl;
        return;
    }

    // zapisywanie danych adresu
    plik << o->outStan() << endl;
    plik << o->outData() << endl;

    plik.close();

    string path2 = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\";
    path2 += "iloscOdczytowMieszkanie" + to_string(nrMieszkania) + "Licznik" + to_string(nrLicznika) + ".txt";
    ofstream plik2(path2);

    if (!plik.good()) {
        cout << "Problem z folderem odczytowym iloscOdczytow" << endl;
        return;
    }

    plik2 << to_string(nrOdczytu + 1);
    plik2.close();

    return;
}

void CSerializer::usunOdczyt(int nrOdczytu, int nrLicznika, int nrMieszkania) {
    string fileName = "Mieszkanie" + to_string(nrMieszkania) + "Licznik" + to_string(nrLicznika) + "Odczyt" + to_string(nrOdczytu)  + ".txt";
    int status = filesystem::remove(fileName);

    string path = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\";
    path += "iloscOdczytowMieszkanie" + to_string(nrMieszkania) + "Licznik" + to_string(nrLicznika) + ".txt";
    ofstream plik(path);

    if (!plik.good()) {
        cout << "Problem z folderem mieszkaniowym iloscMieszkan" << endl;
        return;
    }

    plik << to_string(nrOdczytu - 1);
    plik.close();

    return;
}

