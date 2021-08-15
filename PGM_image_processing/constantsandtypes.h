/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: constantsandtypes.h
 */

#ifndef CONSTANTSANDTYPES_H
#define CONSTANTSANDTYPES_H

using namespace std;

/*
 * enum Operations - typ wyliczeniowy zawierajacy elementy
 * reprezentujace kolejne operacje mozliwe do wykonania
 * na plikach graficznych.
 */
enum Operations {negative, thresholding, multithresholding,
                edge_detection, seam_carving};

/*
 * enum EdgeDetection - typ wyliczeniowy zawierajacy elementy
 * reprezentujace kolejne algorytmy wykrywania krawedzi.
 */
enum EdgeDetection {roberts, prewitt, sobel, scharr, canny};

/*
 * typedef unsigned short typeSize - synonim typu dla
 * wymiarow obrazu PGM.
 */
typedef unsigned int typeSize;

/*
 * const char constNameOfFile - stala przechowujaca dlugosc
 * nazwy pliku graficznego.
 */
const char constNameOfFile = 20;

#endif // CONSTANTSANDTYPES_H

/* constantsandtypes.h */
/********** END_OF_FILE **********/
