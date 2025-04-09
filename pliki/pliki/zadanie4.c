#include <stdio.h>

#include <stdlib.h>

#include "zadanie4.h"



void Zadanie4() {

    int rozmiar,i, nowyRozmiar;

    printf("Podaj rozmiar tablicy: ");

    scanf("%d", &rozmiar);



    int *tablica = malloc(rozmiar * sizeof(int));

    for ( i = 0; i < rozmiar; i++) {

        tablica[i] = 100 - i * 10;

    }



    printf("Tablica: ");

    for ( i = 0; i < rozmiar; i++) {

        printf("%d ", tablica[i]);

    }

    printf("\n");



    printf("Podaj nowy rozmiar tablicy: ");

    scanf("%d", &nowyRozmiar);



    tablica = realloc(tablica, nowyRozmiar * sizeof(int));

    for ( i = rozmiar; i < nowyRozmiar; i++) {

        tablica[i] = 100 - i * 10;

    }



    printf("Nowa tablica: ");

    for ( i = 0; i < nowyRozmiar; i++) {

        printf("%d ", tablica[i]);

    }

    printf("\n");



    free(tablica);

}
