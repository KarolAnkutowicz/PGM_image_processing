/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cimagepgm.cpp
 */

#include "cimagepgm.h"

using namespace std;

using namespace std;

/********** PUBLIC: BEGIN **********/

/*
 * cImagePGM()
 */
cImagePGM::cImagePGM()
{
    strcpy(vTabName, "untitled.pgm"); // ustanowienie nazwy pliku
    vNumberOfGreyLevel = constGreyLevel; // ustanowienie liczby poziomow szarosci
    vHeigth = constHeigth; // ustanowienie wysokosci obrazka
    vWidth = constWidth; // ustanowienie szerokosci obrazka
    vTabPixels = new typeSize[vHeigth * vWidth]; // utworzenie nowej tablicy wartosci pikseli
    mDrawPixels(vNumberOfGreyLevel); // wylosowanie wartosci pikseli
}

/*
 * cImagePGM(typeSize aHeigth, typeSize aWidth)
 */
cImagePGM::cImagePGM(typeSize aHeigth, typeSize aWidth)
{
    strcpy(vTabName, "untitled.pgm"); // ustanowienie nazwy pliku
    vNumberOfGreyLevel = constGreyLevel; // ustanowienie liczby poziomow szarosci
    vHeigth = aHeigth; // ustanowienie wysokosci obrazka
    vWidth = aWidth; // ustanowienie szerokosci obrazka
    vTabPixels = new typeSize[vHeigth * vWidth]; // utworzenie nowej tablicy wartosci pikseli
    mDrawPixels(vNumberOfGreyLevel); // wylosowanie wartosci pikseli
}

/*
 * cImagePGM(typeSize aHeigth, typeSize aWidth, typeSize aNumberOfGreyLevel)
 */
cImagePGM::cImagePGM(typeSize aHeigth, typeSize aWidth, typeSize aNumberOfGreyLevel)
{
    strcpy(vTabName, "untitled.pgm"); // ustanowienie nazwy pliku
    vNumberOfGreyLevel = aNumberOfGreyLevel; // ustanowienie liczby poziomow szarosci
    vHeigth = aHeigth; // ustanowienie wysokosci obrazka
    vWidth = aWidth; // ustanowienie szerokosci obrazka
    vTabPixels = new typeSize[vHeigth * vWidth]; // utworzenie nowej tablicy wartosci pikseli
    mDrawPixels(vNumberOfGreyLevel); // wylosowanie wartosci pikseli
}

/*
 * cImagePGM(typeSize aHeigth, typeSize aWidth, typeSize aNumberOfGreyLevel, typeSize *aTabPixels)
 */
cImagePGM::cImagePGM(typeSize aHeigth, typeSize aWidth, typeSize aNumberOfGreyLevel, typeSize *aTabPixels)
{
    strcpy(vTabName, "untitled.pgm"); // ustanowienie nazwy pliku
    vNumberOfGreyLevel = aNumberOfGreyLevel; // ustanowienie liczby poziomow szarosci
    vHeigth = aHeigth; // ustanowienie wysokosci obrazka
    vWidth = aWidth; // ustanowienie szerokosci obrazka
    vTabPixels = new typeSize[vHeigth * vWidth]; // utworzenie nowej tablicy wartosci pikseli
    for (typeSize i = 0; i < aHeigth; i++) // przejscie po wszystkich rzedach
        for (typeSize j = 0; j < aWidth; j++) // przejscie po wszystkich kolumnach
            vTabPixels[i * aWidth + j] = aTabPixels[i * aWidth + j]; // przypisanie wartosci piksela
}

/*
 * cImagePGM(char *aTabName)
 */
cImagePGM::cImagePGM(char *aTabName)
{

}

/*
 * cImagePGM()
 */
cImagePGM::~cImagePGM()
{
    delete []vTabPixels; // zwolnienie zasobow przydzielanych dynamicznie
}

/*
 * void mReadFile(char *aTabName)
 */
void cImagePGM::mReadFile(char *aTabName)
{
    /*ifstream streamIn;
    //typeSize vValue;
    //string vLine;
    streamIn.open(aTabName);*/
}

/*
 * void mCreateFile()
 */
void cImagePGM::mCreateFile()
{

}

/*
 * void mCreateFile(char *aTabName)
 */
void cImagePGM::mCreateFile(char *aTabName)
{
    /*ofstream streamOut;
    ofstream.open(aTabName);
    ofstream << "P2" << endl << "#" << endl
             << */
}

/*
 * void mDrawPixels()
 */
void cImagePGM::mDrawPixels()
{
    srand(time_t(NULL)); // ustanowienei wartosci losowej
    for (typeSize i = 0; i < vHeigth; i++) // przejscie po wszystkich wierszach
        for (typeSize j = 0; j < vWidth; j++) // przejscie po wszystkich kolumnach
            vTabPixels[i * vWidth + j] = rand() % vNumberOfGreyLevel; // wylosowanie wartosci
}

/*
 * void mDrawPixels(typeSize aNumberOfGreyLevel)
 */
void cImagePGM::mDrawPixels(typeSize aNumberOfGreyLevel)
{
    srand(time_t(NULL)); // ustanowienei wartosci losowej
    for (typeSize i = 0; i < vHeigth; i++) // przejscie po wszystkich wierszach
        for (typeSize j = 0; j < vWidth; j++) // przejscie po wszystkich kolumnach
            vTabPixels[i * vWidth + j] = rand() % aNumberOfGreyLevel; // wylosowanie wartosci
}





/********** PUBLIC: END **********/

/* cimagepgm.cpp */
/********** END_OF_FILE **********/
