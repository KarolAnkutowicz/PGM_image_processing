/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: chandlingimageprocessing.h
 */

#ifndef CHANDLINGIMAGEPROCESSING_H
#define CHANDLINGIMAGEPROCESSING_H

#include "cimagepgm.h"
#include <iostream>

using namespace std;

/*
 * class cHandlingImageProcessing - klasa modelujaca
 * obsluge przetwarzania obrazow PGM.
 */
class cHandlingImageProcessing
{
/********** PUBLIC: BEGIN **********/
public:
    /*
     * cHandlingImageProcessing() - konstruktor wywolywany
     * bez parametrow.
     * PRE:
     * - brak;
     * POST:
     * - utworzenie obiektu klasy cHandlingImageProcessing.
     */
    cHandlingImageProcessing();

    /*
     * char vOption - pole przechowujace wybrana opcje.
     */
    char vOption;

    /*
     * void mMainMenu() - metoda wyswietlajaca menu glowne
     * programu.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMainMenu();

    /*
     * void mMainHandling() - metoda "rozdzielajaca" obsluge
     * poszczegolnych operacji na obrazach PGM.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mMainHandling();

    /*
     * void mHandlingTresholdingAndNegative() - metoda obslugujaca
     * operacja progowania i negatywu.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mHandlingTresholdingAndNegative();

    /*
     * void mHandlingEdgeDetection() - metoda obslugujaca operacje
     * wykrywania krawedzi.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mHandlingEdgeDetection();

    /*
     * void mHandlingSeamCarving() - metoda obslugujaca operacje
     * seam carving.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mHandlingSeamCarving();

/********** PUBLIC: END **********/
};

#endif // CHANDLINGIMAGEPROCESSING_H

/* chandlingimageprocessing.h */
/********** END_OF_FILE **********/
