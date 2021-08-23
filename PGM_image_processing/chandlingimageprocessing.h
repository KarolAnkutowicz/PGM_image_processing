/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: chandlingimageprocessing.h
 */

#ifndef CHANDLINGIMAGEPROCESSING_H
#define CHANDLINGIMAGEPROCESSING_H

#include "cimageoperations.h"
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
     * void mHandlingSeamCarving() - metoda obslugujaca operacje
     * seam carving.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mHandlingSeamCarving();

    /*
     * void mHandlingEdgeDetection() - metoda obslugujaca operacje
     * wykrywania krawedzi.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mHandlingEdgeDetection();

/********** PUBLIC: END **********/
};

#endif // CHANDLINGIMAGEPROCESSING_H

/* chandlingimageprocessing.h */
/********** END_OF_FILE **********/
