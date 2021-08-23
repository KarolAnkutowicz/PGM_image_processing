/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cimageoperations.h
 */

#ifndef CIMAGEOPERATIONS_H
#define CIMAGEOPERATIONS_H

#include "cimagepgm.h"
#include "constantsandtypes.h"

using namespace std;

/*
 * class cImageOperations - klasa modelujaca zbior
 * operacji, ktore mozna przeprowadzic na obrazie
 * w formacie PGM.
 */
class cImageOperations
{
/********** PUBLIC: BEGIN **********/
public:
    /*
     * cImageOperations() - konstruktor wywolywany
     * bez parametrow.
     * PRE:
     * - brak;
     * POST:
     * - utworzenie obiektu klasy cImageOpeartions.
     */
    cImageOperations();

    /*
     * void mMakeNegative(cImagePGM Image) - metoda
     * realizujaca wykonanie operacji negatywu obrazu.
     * PRE:
     * - podanie obiektu graficznego (typ: cImagePGM);
     * POST:
     * - zwrocenie obiektu wynikowego (typ: cImagePGM).
     */
    cImagePGM mMakeNegative(cImagePGM Image);

    /*
     * cImagePGM mMakeTresholding(cImagePGM Image) - metoda
     * realizujaca wykonanie operacji progowania dwupoziomowego.
     * PRE:
     * - podanie obiektu graficznego (typ: cImagePGM);
     * POST:
     * - zwrocenie obiektu wynikowego (typ: cImagePGM).
     */
    cImagePGM mMakeTresholding(cImagePGM Image);

    /*
     * cImagePGM mMakeMultitresholding(cImagePGM Image) -
     * metoda realizujaca wykonanie operacji progowania
     * wielopoziomowego.
     * PRE:
     * - podanie obiektu graficznego (typ: cImagePGM);
     * POST:
     * - zwrocenie obiektu wynikowego (typ: cImagePGM).
     */
    cImagePGM mMakeMultitresholding(cImagePGM Image);

    /*
     * cImagePGM mMakeSeamCarving(cImagePGM Image) -
     * metoda realizujaca wykonaie operacji seam carving.
     * PRE:
     * - podanie obiektu graficznego (typ: cImagePGM);
     * POST:
     * - zwrocenie obiektu wynikowego (typ: cImagePGM).
     */
    cImagePGM mMakeSeamCarving(cImagePGM Image);

    /*
     * cImagePGM mMakeEdgeRoberts(cImagePGM Image) - metoda
     * realizujaca operacje wykrywania krawedzi za pomoca
     * krzyza Robertsa.
     * PRE:
     * - podanie obiektu graficznego (typ: cImagePGM);
     * POST:
     * - zwrocenie obiektu wynikowego (typ: cImagePGM).
     */
    cImagePGM mMakeEdgeRoberts(cImagePGM Image);

    /*
     * cImagePGM mMakeEdgePrewitt(cImagePGM Image) - metoda
     * realizujaca operacje wykrywania krawedzi za pomoca
     * masek Prewitta.
     * PRE:
     * - podanie obiektu graficznego (typ: cImagePGM);
     * POST:
     * - zwrocenie obiektu wynikowego (typ: cImagePGM).
     */
    cImagePGM mMakeEdgePrewitt(cImagePGM Image);

    /*
     * cImagePGM mMakeEdgeSobel(cImagePGM Image) - metoda
     * realizujaca operacje wykrywania krawedzi za pomoca
     * masek Sobela.
     * PRE:
     * - podanie obiektu graficznego (typ: cImagePGM);
     * POST:
     * - zwrocenie obiektu wynikowego (typ: cImagePGM).
     */
    cImagePGM mMakeEdgeSobel(cImagePGM Image);

    /*
     * cImagePGM mMakeEdgeScharr(cImagePGM Image) - metoda
     * realizujaca operacje wykrywania krawedzi za pomoca
     * masek Scharra.
     * PRE:
     * - podanie obiektu graficznego (typ: cImagePGM);
     * POST:
     * - zwrocenie obiektu wynikowego (typ: cImagePGM).
     */
    cImagePGM mMakeEdgeScharr(cImagePGM Image);

    /*
     * cImagePGM mMakeEdgeCanny(cImagePGM Image) - metoda
     * realizujaca oepracje wykrywania krawedzi za pomoca
     * wieloetapowego algorytmu Canny'ego.
     * PRE:
     * - podanie obiektu graficznego (typ: cImagePGM);
     * POST:
     * - zwrocenie obiektu wynikowego (typ: cImagePGM).
     */
    cImagePGM mMakeEdgeCanny(cImagePGM Image);

/********** PUBLIC: END **********/
};

#endif // CIMAGEOPERATIONS_H

/* cimageoperations.h */
/********** END_OF_FILE **********/
