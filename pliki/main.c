#include <stdio.h>
#include <stdlib.h>

#include "zadanie1.h"

#include "zadanie2.h"

#include "zadanie3.h"

#include "zadanie4.h"



int main() {

    int wybor;

    printf("Wybierz zadanie do wykonania (1-4): ");

    scanf("%d", &wybor);



    switch (wybor) {

        case 1:

            Zadanie1();

            break;

        case 2: {

            sProstokat prostokat1, prostokat2;

            WczytajProstokat(&prostokat1);

            WczytajProstokat(&prostokat2);

            DrukujProstokat(prostokat1);

            DrukujProstokat(prostokat2);

            break;

        }

        case 3:

            Zadanie3();

            break;

        case 4:

            Zadanie4();

            break;

        default:

            printf("Niepoprawny wybór.\n");

            break;

    }



    return 0;

}
