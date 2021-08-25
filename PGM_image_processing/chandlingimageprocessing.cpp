/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: chandlingimageprocessing.cpp
 */

#include "chandlingimageprocessing.h"
#include <iostream>

using namespace std;

/********** PUBLIC: BEGIN **********/

cHandlingImageProcessing::cHandlingImageProcessing()
{
}

/*
 * void mMainMenu()
 */
void cHandlingImageProcessing::mMainMenu()
{
    cout << "Dostepne operacje:" << endl << endl // wypisanie dostepnych operacji na obrazach
         << "(1) - Negatyw" << endl
         << "(2) - Progowanie dwupoziomowe" << endl
         << "(3) - Progowanie wielopoziomowe" << endl
         << "(4) - Wykrywanie krawedzi: Roberts" << endl
         << "(5) - Wykrywanie krawedzi: Prewitt" << endl
         << "(6) - Wykrywanie krawedzi: Sobel" << endl
         << "(7) - Wykrywanie krawedzi: Scharr" << endl
         << "(8) - Wykrywanie krawedzi: Canny" << endl
         << "(9) - Seam Carving" << endl
         << "(k) - koniec dzialania programu" << endl;
}

/*
 * void mMainHandling()
 */
void cHandlingImageProcessing::mMainHandling()
{
    do
    {
        cout << endl << "Podaj opcje (m - menu): "; // zacheta podania opcji wyboru
        cin >> vOption; // wczytanie opcji
        switch (vOption) // wybor opcji w zaleznosci od operacji
        {
        case '1': case '2': case '3': mHandlingTresholdingAndNegative(); break; // wybranie opcji obslugi negatywu i progowania
        case '4': case '5': case '6': case '7': case '8': mHandlingEdgeDetection(); break; // wybranie opcji obslugi wykrywania krawedzi
        case '9': mHandlingSeamCarving(); break; // wybranie opcji  obslugi algorytmu seam carving
        case 'm': mMainMenu(); break; // wybranie opcji ponownego wyswietlenia menu
        case 'k': break; // wybranie opcji zakonczenia programu
        default: cout << "Podana opcja nie istnieje!" << endl; break;
        }
    } while (vOption != 'k'); // sprawdzenie warunku zakonczenia programu
}

/*
 * void mHandlingTresholdingAndNegative()
 */
void cHandlingImageProcessing::mHandlingTresholdingAndNegative()
{

}

/*
 * void mHandlingEdgeDetection()
 */
void cHandlingImageProcessing::mHandlingEdgeDetection()
{

}

/*
 * void mHandlingSeamCarving()
 */
void cHandlingImageProcessing::mHandlingSeamCarving()
{

}

/********** PUBLIC: END **********/

/* chandlingimageprocessing.cpp */
/********** END_OF_FILE **********/
