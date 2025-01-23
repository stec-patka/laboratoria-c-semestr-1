#include <stdio.h>

#include <string.h>

#include "zadanie1.h"



void Zadanie1() {

    char buffer[100];

    char znak1, znak2;

    int indeks,i;



    printf("Podaj dwa znaki drukowane: ");

    scanf(" %c %c", &znak1, &znak2);



    printf("Podaj liczbę całkowitą dodatnią: ");

    scanf("%d", &indeks);



    printf("Podaj tekst: ");

    scanf(" %[^\n]", buffer);



    int liczbaZnakow = 0;

    for ( i = 0; buffer[i] != '\0'; i++) {

        liczbaZnakow++;

    }

    printf("Liczba znaków w tekście: %d\n", liczbaZnakow);



    if (indeks < liczbaZnakow) {

        buffer[indeks] = '?';

    }



    for (i = 0; buffer[i] != '\0'; i++) {

        if (buffer[i] == znak2) {

            buffer[i] = znak1;

        } else if (buffer[i] == '_') {

            buffer[i] = ' ';

        }

    }

    printf("Zmieniony tekst: %s\n", buffer);

}
