
#include <stdio.h>

#include <math.h>

#include "zadanie2.h"



void WczytajProstokat(sProstokat *prostokat) {

    printf("Podaj długości boków A i B: ");

    scanf("%d %d", &prostokat->A, &prostokat->B);

    prostokat->przekatna = sqrt(pow(prostokat->A, 2) + pow(prostokat->B, 2));

}



void DrukujProstokat(const sProstokat prostokat) {

    printf("Prostokąt: A = %d, B = %d, Przekątna = %.2f\n",

           prostokat.A, prostokat.B, prostokat.przekatna);

}
