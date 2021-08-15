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
    cImagePGM();

/********** PUBLIC: END **********/
};

#endif // CIMAGEPGM_H

/* cimagepgm.h */
/********** END_OF_FILE **********/
