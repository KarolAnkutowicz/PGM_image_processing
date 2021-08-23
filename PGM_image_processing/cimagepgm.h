/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cimagepgm.h
 */

#ifndef CIMAGEPGM_H
#define CIMAGEPGM_H

#include "constantsandtypes.h"
#include <fstream>
#include <iostream>

using namespace std;

/*
 * class cImagePGM - klasa modelujaca plik graficzny
 * w formacie PGM
 */
class cImagePGM
{
/********** PRIVATE: BEGIN **********/

    /*
     * char vTabName[constNameOfFile] - tablica znakowa
     * przechowujaca nazwe pliku.
     */
    char vTabName[constNameOfFile];

    /*
     * typeSize vNumberOfGreyLevel - zmienna przechowujaca
     * liczbe odcieni szarosci obrazu.
     */
    typeSize vNumberOfGreyLevel;

    /*
     * typeSize vHeigth - zmienna przechowujaca wysokosc
     * obrazu (liczbe pikseli).
     */
    typeSize vHeigth;

    /*
     * typeSize vWidth - zmienna przechowujaca szerokosc
     * obrazu (liczbe pikseli).
     */
    typeSize vWidth;

    /*
     * typeSize *tabPixels - tablica przechowujaca
     * elementy obrazu (piksele).
     */
    typeSize *tabPixels;

/********** PRIVATE: END **********/

/********** PUBLIC: BEGIN **********/
public:
    /*
     * cImagePGM() - konstruktor wywolywany bez argumentow.
     * PRE:
     * - brak;
     * POST:
     * - utworzenie obiektu klasy cImagePGM.
     */
    cImagePGM();

    /*
     * cImagePGM() - konstruktor wywolywany z dwoma argumentami -
     * wymiarami obrazu.
     * PRE:
     * - podanie wysokosci obrazu w pikselach (typ: typeSize);
     * - podanie szerokosci obrazu w pikselach (typ: typeSize);
     * POST:
     * - utworzenie obiektu klasy cImagePGM.
     */
    cImagePGM(typeSize aHeigth, typeSize aWidth);

    /*
     * cImagePGM() - konstruktor wywolywany z trzema argumentami -
     * wymiarami obrazu oraz liczba stopni szarosci.
     * PRE:
     * - podanie wysokosci obrazu w pikselach (typ: typeSize);
     * - podanie szerokosci obrazu w pikselach (typ: typeSize);
     * - podanie liczby stopni szarosci (typ: typeSize);
     * POST:
     * - utworzenie obiektu klasy cImagePGM.
     */
    cImagePGM(typeSize aHeigth, typeSize aWidth, typeSize aNumberOfGreyLevel);

    /*
     * cImagePGM() - konstruktor wywolywany z czterema argmentami -
     * wymiarami obrazu, liczba stopni szarosci oraz wskaznikiem
     * do tablicy elementow obrazu.
     * PRE:
     * - podanie wysokosci obrazu w pikselach (typ: typeSize);
     * - podanie szerokosci obrazu w pikselach (typ: typeSize);
     * - podanie liczby stopni szarosci (typ: typeSize);
     * - podanie wskaznika do tablicy elementow obrazu (typ: typeSize);
     * POST:
     * - utworzenie obiektu klasy cImagePGM.
     */
    cImagePGM(typeSize aHeigth, typeSize aWidth, typeSize aNumberOfGreyLevel, typeSize *aTabPixels);

    /*
     * cImagePGM() - konstruktor wywolywany z jednym argumentem -
     * nazwa pliku graficznego w formacie PGM.
     * PRE:
     * - podanie nazwy pliku w formacie PGM (typ: *char);
     * POST:
     * - utworzenie obiektu klasy cImagePGM.
     */
    cImagePGM(char *aTabName);

    /*
     * cImagePGM() - destruktor klasy cImagePGM
     * PRE:
     * - brak;
     * POST:
     * - zwalniania zasobow przydzielanych dynamicznie.
     */
    ~cImagePGM();

    /*
     * void mReadFile(char *aTabName) - metoda wczytujaca plik
     * w formacie PGM o dowolnej nazwie.
     * PRE:
     * - podanie nazwy pliku (typ: *char);
     * POST:
     * - brak.
     */
    void mReadFile(char *aTabName);

    /*
     * void mCreateFile() - metoda tworzaca plik graficzny PGM
     * o domyslnej nazwie.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mCreateFile();

    /*
     * void mCreateFile(char *aTabName) - metoda tworzaca plik
     * graficzny PGM o podanej nazwie.
     * PRE:
     * - podanie nazwy pliku (typ: *char);
     * POST:
     * - brak.
     */
    void mCreateFile(char *aTabName);

    /*
     * void mDrawPixels() - metoda losujaca wartosc pikseli
     * w generowanym obrazie z uzyciem domyslnej liczby
     * odcieni szarosci.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mDrawPixels();

    /*
     * void mDrawPixels(typeSize aNumberOfGreyLevel) - metoda
     * losujaca wartosc pikseli w generowanym obrazie
     * z wykorzystaniem podanej liczby odcieni szarosci.
     * PRE:
     * - podanie liczby odcieni szarosci (typ: typeSize);
     * POST:
     * - brak.
     */
    void mDrawPixels(typeSize aNumberOfGreyLevel);

/********** PUBLIC: END **********/
};

#endif // CIMAGEPGM_H

/* cimagepgm.h */
/********** END_OF_FILE **********/
