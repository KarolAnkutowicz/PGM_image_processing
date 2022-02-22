/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cimagepgm.h
 */

#pragma once

#include "constantsandtypes.hpp"
#include <cstdlib>
#include <cstring>
#include <ctime>
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
     * typeSize *vTabPixels - tablica przechowujaca
     * elementy obrazu (piksele).
     */
    typeSize* vTabPixels;

    /*
     * void setNumberOfGreyLevel(typeSize aNumberOfGreyLevel) -
     * metoda zmieniajaca wartosc pola vNumberOfGreyLevel.
     * PRE:
     * - podanie liczby poziomow szarosci (typ: typeSize);
     * POST:
     * - brak.
     */
    inline void setNumberOfGreyLevel(typeSize aNumberOfGreyLevel)
    {
        vNumberOfGreyLevel = aNumberOfGreyLevel;
    }

    /*
     * void setHeigth(typeSize aHeigth) - metoda
     * zmieniajaca wartosc pola vHeigth.
     * PRE:
     * - podanie wysokosci obrazu (typ: typeSize);
     * POST:
     * - brak.
     */
    inline void setHeigth(typeSize aHeigth)
    {
        vHeigth = aHeigth;
    }

    /*
     * void setWidth(typeSize aWidth) - metoda
     * zmieniajaca wartosc pola vWidth.
     * PRE:
     * - podanie szerokosci obrazu (typ: typeSize);
     * POST:
     * - brak.
     */
    inline void setWidth(typeSize aWidth)
    {
        vWidth = aWidth;
    }

    /*
     * void setPixel(typeSize aHeigth, typeSize aWidth, typeSize aValue) -
     * metoda zmieniajaca wartosc wskazanego piksela.
     * PRE:
     * - podanie numeru wiersza (typ: typeSize);
     * - podanie numeru kolumny (typ: typeSize);
     * - podanie wartosci piksela (typ: typeSize);
     * POST:
     * - brak.
     */
    inline void setPixel(typeSize aHeigth, typeSize aWidth, typeSize aValue)
    {
        vTabPixels[aHeigth * vWidth + aWidth] = aValue;
    }

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
     * cImagePGM(typeSize aHeigth, typeSize aWidth) - konstruktor
     * wywolywany z dwoma argumentami - wymiarami obrazu.
     * PRE:
     * - podanie wysokosci obrazu w pikselach (typ: typeSize);
     * - podanie szerokosci obrazu w pikselach (typ: typeSize);
     * POST:
     * - utworzenie obiektu klasy cImagePGM.
     */
    cImagePGM(typeSize aHeigth, typeSize aWidth);

    /*
     * cImagePGM(typeSize aHeigth, typeSize aWidth, typeSize aNumberOfGreyLevel) -
     * konstruktor wywolywany z trzema argumentami - wymiarami
     * obrazu oraz liczba stopni szarosci.
     * PRE:
     * - podanie wysokosci obrazu w pikselach (typ: typeSize);
     * - podanie szerokosci obrazu w pikselach (typ: typeSize);
     * - podanie liczby stopni szarosci (typ: typeSize);
     * POST:
     * - utworzenie obiektu klasy cImagePGM.
     */
    cImagePGM(typeSize aHeigth, typeSize aWidth, typeSize aNumberOfGreyLevel);

    /*
     * cImagePGM(typeSize aHeigth, typeSize aWidth, typeSize aNumberOfGreyLevel, typeSize *aTabPixels) -
     * konstruktor wywolywany z czterema argmentami - wymiarami
     * obrazu, liczba stopni szarosci oraz wskaznikiem
     * do tablicy elementow obrazu.
     * PRE:
     * - podanie wysokosci obrazu w pikselach (typ: typeSize);
     * - podanie szerokosci obrazu w pikselach (typ: typeSize);
     * - podanie liczby stopni szarosci (typ: typeSize);
     * - podanie wskaznika do tablicy elementow obrazu (typ: typeSize);
     * POST:
     * - utworzenie obiektu klasy cImagePGM.
     */
    cImagePGM(typeSize aHeigth, typeSize aWidth, typeSize aNumberOfGreyLevel, typeSize* aTabPixels);

    /*
     * cImagePGM(char *aTabName) - konstruktor wywolywany
     * z jednym argumentem - nazwa pliku graficznego
     * w formacie PGM.
     * PRE:
     * - podanie nazwy pliku w formacie PGM (typ: *char);
     * POST:
     * - utworzenie obiektu klasy cImagePGM.
     */
    cImagePGM(char* aTabName);

    /*
     * cImagePGM() - destruktor klasy cImagePGM.
     * PRE:
     * - brak;
     * POST:
     * - zwalniania zasobow przydzielanych dynamicznie.
     */
    ~cImagePGM();



    /*
     * typeSize getNumberOfGreyLevel() - metoda
     * zwracajaca wartosc pola vNumberOfGreyLevel.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vNumberOfGreyLevel.
     */
    inline typeSize getNumberOfGreyLevel()
    {
        return vNumberOfGreyLevel;
    }

    /*
     * typeSize getHeigth() - metoda zwracajaca
     * wartosc pola vHeigth.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vHeigth.
     */
    inline typeSize getHeigth()
    {
        return vHeigth;
    }

    /*
     * typeSize getWidth() - metoda zwracajaca
     * wartosc pola vWidth.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vWidth.
     */
    inline typeSize getWidth()
    {
        return vWidth;
    }

    /*
     * typeSize getPixel(typeSize aHeigth, typeSize aWidth) -
     * PRE:
     * - podanie numeru wiersza (typ: typeSize);
     * - podanie numeru kolumny (typ: typeSize);
     * POST:
     * - zwrocenie wartosci wskazanego elementu
     * tablicy vTabPixels.
     */
    inline typeSize getPixel(typeSize aHeigth, typeSize aWidth)
    {
        return vTabPixels[aHeigth * vWidth + aWidth];
    }



    /*
     * void mReadFile(char *aTabName) - metoda wczytujaca plik
     * w formacie PGM o dowolnej nazwie.
     * PRE:
     * - podanie nazwy pliku (typ: *char);
     * POST:
     * - brak.
     */
    void mReadFile(char* aTabName);

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
    void mCreateFile(char* aTabName);



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



    /*
     * void mMakeNegative() - metoda realizujaca wykonanie
     * operacji negatywu obrazu.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie obiektu wynikowego (typ: cImagePGM).
     */
    cImagePGM mMakeNegative();

    /*
     * cImagePGM mMakeTresholding() - metoda realizujaca
     * wykonanie operacji progowania dwupoziomowego.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie obiektu wynikowego (typ: cImagePGM).
     */
    cImagePGM mMakeTresholding();

    /*
     * cImagePGM mMakeMultitresholding() - metoda
     * realizujaca wykonanie operacji progowania
     * wielopoziomowego.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie obiektu wynikowego (typ: cImagePGM).
     */
    cImagePGM mMakeMultitresholding();

    /*
     * cImagePGM mMakeSeamCarving() - metoda realizujaca
     * wykonaie operacji seam carving.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie obiektu wynikowego (typ: cImagePGM).
     */
    cImagePGM mMakeSeamCarving();

    /*
     * cImagePGM mMakeEdgeRoberts() - metoda realizujaca
     * operacje wykrywania krawedzi za pomoca krzyza Robertsa.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie obiektu wynikowego (typ: cImagePGM).
     */
    cImagePGM mMakeEdgeRoberts();

    /*
     * cImagePGM mMakeEdgePrewitt() - metoda realizujaca
     * operacje wykrywania krawedzi za pomoca masek Prewitta.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie obiektu wynikowego (typ: cImagePGM).
     */
    cImagePGM mMakeEdgePrewitt();

    /*
     * cImagePGM mMakeEdgeSobel() - metoda realizujaca
     * operacje wykrywania krawedzi za pomoca masek Sobela.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie obiektu wynikowego (typ: cImagePGM).
     */
    cImagePGM mMakeEdgeSobel();

    /*
     * cImagePGM mMakeEdgeScharr() - metoda realizujaca
     * operacje wykrywania krawedzi za pomoca masek Scharra.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie obiektu wynikowego (typ: cImagePGM).
     */
    cImagePGM mMakeEdgeScharr();

    /*
     * cImagePGM mMakeEdgeCanny() - metoda realizujaca
     * operacje wykrywania krawedzi za pomoca wieloetapowego
     * algorytmu Canny'ego.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie obiektu wynikowego (typ: cImagePGM).
     */
    cImagePGM mMakeEdgeCanny();

    /********** PUBLIC: END **********/
};

/* cimagepgm.h */
/********** END_OF_FILE **********/
