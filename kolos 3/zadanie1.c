#include <stdio.h>
#include <stdlib.h>
#include "zadanie1.h"



void zadanie1() {
    char bufor[100];
    char znak1, znak2;
    int indeks,i;

    printf("Podaj pierwszy znak: ");
    scanf(" %c", &znak1);
    printf("Podaj drugi znak: ");
    scanf(" %c", &znak2);
    printf("Podaj liczbe calkowita dodatnia: ");
    scanf("%d", &indeks);

    printf("Podaj zdanie (maksymalnie 100 znakow): ");
    getchar();
    fgets(bufor, 100, stdin);


    size_t dlugosc = strlen(bufor);
    if (bufor[dlugosc - 1] == '\n') {
        bufor[dlugosc - 1] = '\0';
    }


    int liczbaZnakow = liczZnaki(bufor);
    printf("Liczba znakow w tekscie: %d\n", liczbaZnakow);


    if (indeks < liczbaZnakow) {
        bufor[indeks] = '?';
    }

    for ( i = 0; i < liczbaZnakow; i++) {
        if (bufor[i] == znak2) {
            bufor[i] = znak1;
        }
    }

    for ( i = 0; i < liczbaZnakow; i++) {
        if (bufor[i] == '_') {
            bufor[i] = ' ';
        }
    }

    printf("Przetworzony tekst: %s\n", bufor);

    return 0;
}
