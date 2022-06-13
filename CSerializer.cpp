//
// Created by grzeg on 03.06.2022.
//

#include "CSerializer.h"


void CSerializer::zapiszMieszkanie(CMieszkanie *m, int nrMieszkania) {
    string path = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\";
    path += "Mieszkanie" + to_string(nrMieszkania) + ".txt";
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

    if (!plik2.good()) {
        cout << "Nie ma folderu iloscMieszkan" << endl;
        return;
    }

    plik2 << to_string(nrMieszkania + 1);
    plik2.close();

    string path3 = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\";
    path3 += "iloscLicznikowMieszkanie" + to_string(nrMieszkania) + ".txt";
    ofstream plik3(path3);  // tworze nowy folder ilosc licznikow i bedzie on mial wartosc 0

    if (!plik3.good()) {
        cout << "Problem z folderem licznikowym iloscLicznikowMieszkanie" << endl;
        return;
    }

    plik3 << to_string(0);
    plik3.close();

    return;
}

void CSerializer::usunMieszkanie(int nrMieszkania) {
    string path = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\";
    path += "Mieszkanie" + to_string(nrMieszkania) + ".txt";
    int n = path.length();
    char pathArray[n + 1];
    strcpy(pathArray, path.c_str());
    int status = remove(pathArray);

    string path2 = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\";
    path2 += "iloscLicznikowMieszkanie" + to_string(nrMieszkania) + ".txt";
    int n2 = path2.length();
    char pathArray2[n2 + 1];
    strcpy(pathArray2, path2.c_str());
    int status2 = remove(pathArray2);

    string path3 = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\iloscMieszkan.txt";
    ofstream plik(path3);

    if (!plik.good()) {
        cout << "Problem z folderem mieszkaniowym iloscMieszkan" << endl;
        return;
    }

    plik << to_string(nrMieszkania - 1);
    plik.close();

}

void CSerializer::zapiszLicznik(CLicznik *l, int nrLicznika, int nrMieszkania) {
    string path = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\";
    path += "Mieszkanie" + to_string(nrMieszkania) + "Licznik" + to_string(nrLicznika) + ".txt";
    ofstream plik(path);

    if (!plik.good()) {
        cout << "Problem z folderem licznikowym" << endl;
        return;
    }

    plik << l->outTyp() << endl;
    plik << l->outNumerLicznika() << endl;

    string typ = l->outTyp();
    if (typ == "pradu") {
        plik << l->outTaryfaMiesieczna() << endl;
        plik << l->outTaryfaZuzycia() << endl;
    } else if (typ == "wody") {
        plik << l->outTaryfaMiesieczna() << endl;
        plik << l->outTaryfaZuzycia() << endl;
    } else if (typ == "gazu") {
        plik << l->outTaryfaMiesieczna() << endl;
        plik << l->outTaryfaZuzycia() << endl;
    }

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

    string path3 = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\";
    path3 += "iloscOdczytowMieszkanie" + to_string(nrMieszkania) + "Licznik" + to_string(nrLicznika) + ".txt";
    ofstream plik3(path3);

    if (!plik.good()) {
        cout << "odczyt zapiszodczyt ser" << endl;
        return;
    }

    plik3 << to_string(0);
    plik3.close();

}

void CSerializer::usunLicznik(int nrLicznika, int nrMieszkania) {
    string path = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\";
    path += "Mieszkanie" + to_string(nrMieszkania) + "Licznik" + to_string(nrLicznika) + ".txt";
    int n = path.length();
    char pathArray[n + 1];
    strcpy(pathArray, path.c_str());
    int status = remove(pathArray);
    if(status != 0){
        cout << "no" << endl;
    }else{
        cout << "yes" << endl;
    }

    string path2 = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\";
    path2 += "iloscOdczytowMieszkanie" + to_string(nrMieszkania) + "Licznik" + to_string(nrLicznika) + ".txt";
    int n2 = path2.length();
    char pathArray2[n2 + 1];
    strcpy(pathArray2, path2.c_str());
    int status2 = remove(pathArray2);

    string path3 = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\";
    path3 += "iloscLicznikowMieszkanie" + to_string(nrMieszkania) + ".txt";
    ofstream plik(path3);

    if (!plik.good()) {
        cout << "Nie ma folderu ilosc licznikow" << endl;
        return;
    }

    plik << to_string(nrLicznika - 1);
    plik.close();

}

void CSerializer::zapiszOdczyt(COdczyt *o, int nrOdczytu, int nrLicznika, int nrMieszkania) {
    string path = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\";
    path += "Mieszkanie" + to_string(nrMieszkania) + "Licznik" + to_string(nrLicznika) + "Odczyt" +
            to_string(nrOdczytu) + ".txt";
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
        cout << "odczyt zapiszodczyt ser" << endl;
        return;
    }

    plik2 << to_string(nrOdczytu + 1);
    plik2.close();

    return;
}

void CSerializer::usunOdczyt(int nrOdczytu, int nrLicznika, int nrMieszkania) {
    string path = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\";
    path += "Mieszkanie" + to_string(nrMieszkania) + "Licznik" + to_string(nrLicznika) + "Odczyt" +
            to_string(nrOdczytu) + ".txt";
    int n = path.length();
    char pathArray[n + 1];
    strcpy(pathArray, path.c_str());
    int status = remove(pathArray);

    string path2 = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\";
    path2 += "iloscOdczytowMieszkanie" + to_string(nrMieszkania) + "Licznik" + to_string(nrLicznika) + ".txt";
    ofstream plik(path2);

    if (!plik.good()) {
        cout << "odczyt usunOdczyt ser" << endl;
        return;
    }

    plik << to_string(nrOdczytu - 1);
    plik.close();
}

