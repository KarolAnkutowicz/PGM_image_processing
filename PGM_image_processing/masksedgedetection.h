/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: masksedgedetection.h
 */

#ifndef MASKSEDGEDETECTION_H
#define MASKSEDGEDETECTION_H

#include "constantsandtypes.h"

using namespace std;

/*
 * const typeSize constRoberts_[4] - maski
 * operatora Robertsa do wykrywania krawedzi.
 */
const typeSize constRoberts45[4] = {0, 1, -1, 0};
const typeSize constRoberts135[4] = {1, 0, 0, -1};

/*
 * const typeSize constPrewitt_[9] - maski
 * operatora Prewitta do wykrywania krawedzi.
 */
const typeSize constPrewitt0[9] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};
const typeSize constPrewitt45[9] = {0, 1, 1, -1, 0, 1, -1, -1, 0};
const typeSize constPrewitt90[9] = {1, 1, 1, 0, 0, 0, -1, -1, -1};
const typeSize constPrewitt135[9] = {1, 1, 0, 1, 0, -1, 0, -1, -1};

/*
 * const typeSize constSobel_[9] - maski
 * operatora Sobela do wykrywania krawedzi.
 */
const typeSize constSobel0[9] = {-1, 0, 1, -2, 0, 2, -1, 0, 1};
const typeSize constSobel45[9] = {0, 1, 2, -1, 0, 1, -2, -1, 0};
const typeSize constSobel90[9] = {1, 2, 1, 0, 0, 0, -1, -2, -1};
const typeSize constSobel135[9] = {2, 1, 0, 1, 0, -1, 0, -1, -2};

/*
 * const typeSize constScharr_[9] - maski
 * operatora Scharra do wykrywania krawedzi.
 */
const typeSize constScharr0[9] = {-3, 0, 3, -10, 0, 10, -3, 0, 3};
const typeSize constScharr45[9] = {0, 3, 10, -3, 0, 3, -10, -3, 0};
const typeSize constScharr90[9] = {3, 10, 3, 0, 0, 0, -3, -10, -3};
const typeSize constScharr135[9] = {10, 3, 0, 3, 0, -3, 0, -3, -10};


#endif // MASKSEDGEDETECTION_H

/* masksedgedetection.h */
/********** END_OF_FILE **********/
