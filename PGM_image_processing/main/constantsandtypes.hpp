/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: constantsandtypes.h
 */

#pragma once

using namespace std;

/*
 * enum Operations - typ wyliczeniowy zawierajacy elementy
 * reprezentujace kolejne operacje mozliwe do wykonania
 * na plikach graficznych.
 */
enum Operations {
    negative, thresholding, multithresholding,
    seam_carving, edge_detection
};

/*
 * enum EdgeDetection - typ wyliczeniowy zawierajacy elementy
 * reprezentujace kolejne algorytmy wykrywania krawedzi.
 */
enum EdgeDetection { roberts, prewitt, sobel, scharr, canny };

/*
 * typedef int typeSize - synonim typu dla
 * wymiarow obrazu PGM.
 */
typedef int typeSize;

/*
 * const char constNameOfFile - stala przechowujaca dlugosc
 * nazwy pliku graficznego.
 */
const char constNameOfFile = 20;

/*
 * const typeSize constHeigth - stala przechowujaca domyslna
 * wysokosc (w pikselach) obrazu.
 */
const typeSize constHeigth = 24;

/*
 * const typeSize constWidth - stala przechowujaca domyslna
 * szerokosc (w pikselach) obrazu.
 */
const typeSize constWidth = 32;

/*
 * const typeSize constGreyLevel - stala przechowujaca domyslna
 * liczba odcieni szarosci.
 */
const typeSize constGreyLevel = 8;

/* constantsandtypes.h */
/********** END_OF_FILE **********/
