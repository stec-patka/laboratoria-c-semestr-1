#include <stdio.h>
#include <stdlib.h>
#include "zadanie1.h"

#define BUFFER_SIZE 100

// zadanie1


int liczZnaki(const char *tekst) {
    int licznik = 0;
    int i;
    for ( i = 0; tekst[i] != '\0'; i++) {
        licznik++;
    }
    return licznik;
}

void zadanie1();



// zadanie2

typedef struct {
    int A;
    int B;
    float przekatna;
} sProstokat;


void wczytaj(sProstokat *prostokat) {
    printf("Podaj dlugosc boku A: ");
    scanf("%d", &prostokat->A);
    printf("Podaj dlugosc boku B: ");
    scanf("%d", &prostokat->B);

    prostokat->przekatna = sqrt(prostokat->A * prostokat->A + prostokat->B * prostokat->B);
}

void drukuj(const sProstokat prostokat) {
    printf("Bok A: %d\n", prostokat.A);
    printf("Bok B: %d\n", prostokat.B);
    printf("Przekatna: %.2f\n", prostokat.przekatna);
}

void zadanie2() {

    sProstokat prostokat1, prostokat2;


    printf("Wczytywanie danych dla pierwszego prostokata:\n");
    wczytaj(&prostokat1);

    printf("\nWczytywanie danych dla drugiego prostokata:\n");
    wczytaj(&prostokat2);


    printf("\nDane pierwszego prostokata:\n");
    drukuj(prostokat1);

    printf("\nDane drugiego prostokata:\n");
    drukuj(prostokat2);

    return 0;
}


// zadanie3


void toBinary(short n, char *output, int size) {
    int i;
    for ( i = size - 1; i >= 0; i--) {
        output[i] = (n & 1) ? '1' : '0';
        n >>= 1;
    }
    output[size] = '\0';
}

void zadanie3() {
    short X, Y;
    char binX[17], binY[17], binResult[17];


    printf("Podaj liczbe calkowita dodatnia X: ");
    scanf("%hd", &X);
    printf("Podaj liczbe calkowita dodatnia Y: ");
    scanf("%hd", &Y);


    short and = X & Y;
    short or = X | Y;
    short xor = X ^ Y;
    short notX = ~X;
    short notY = ~Y;
    short nand = ~(X & Y);
    short nor = ~(X | Y);
    short xnor = ~(X ^ Y);
    short przesuniecieLX = X << 4;
    short przesunieciePY = Y >> 3;


    toBinary(X, binX, 16);
    toBinary(Y, binY, 16);

    printf("\nLiczby wejsciowe w postaci dziesietnej:\n");
    printf("X = %hd, Y = %hd\n", X, Y);
    printf("\nLiczby wejsciowe w postaci binarnej:\n");
    printf("X = %s\n", binX);
    printf("Y = %s\n", binY);

    printf("\nWyniki operacji w postaci dziesietnej:\n");
    printf("AND (X & Y) = %hd\n", and);
    printf("OR (X | Y) = %hd\n", or);
    printf("XOR (X ^ Y) = %hd\n", xor);
    printf("NOT X (~X) = %hd\n", notX);
    printf("NOT Y (~Y) = %hd\n", notY);
    printf("NAND (~(X & Y)) = %hd\n", nand);
    printf("NOR (~(X | Y)) = %hd\n", nor);
    printf("XNOR (~(X ^ Y)) = %hd\n", xnor);
    printf("SHIFT LEFT X (X << 4) = %hd\n", przesuniecieLX);
    printf("SHIFT RIGHT Y (Y >> 3) = %hd\n", przesunieciePY);

    printf("\nWyniki operacji w postaci binarnej:\n");
    toBinary(and, binResult, 16);
    printf("AND (X & Y) = %s\n", binResult);
    toBinary(or, binResult, 16);
    printf("OR (X | Y) = %s\n", binResult);
    toBinary(xor, binResult, 16);
    printf("XOR (X ^ Y) = %s\n", binResult);
    toBinary(notX, binResult, 16);
    printf("NOT X (~X) = %s\n", binResult);
    toBinary(notY, binResult, 16);
    printf("NOT Y (~Y) = %s\n", binResult);
    toBinary(nand, binResult, 16);
    printf("NAND (~(X & Y)) = %s\n", binResult);
    toBinary(nor, binResult, 16);
    printf("NOR (~(X | Y)) = %s\n", binResult);
    toBinary(xnor, binResult, 16);
    printf("XNOR (~(X ^ Y)) = %s\n", binResult);
    toBinary(przesuniecieLX, binResult, 16);
    printf("SHIFT LEFT X (X << 4) = %s\n", binResult);
    toBinary(przesunieciePY, binResult, 16);
    printf("SHIFT RIGHT Y (Y >> 3) = %s\n", binResult);

    return 0;
}


void zadanie4(){

    int *tablica;
    int rozmiar, nowyRozmiar,i;

    printf("Podaj rozmiar tablicy (liczba calkowita dodatnia): ");
    scanf("%d", &rozmiar);

    tablica = (int *)malloc(rozmiar * sizeof(int));
    if (tablica == NULL) {
        printf("Blad alokacji pamieci!\n");
        return 1;
    }


    for (i = 0; i < rozmiar; i++) {
        tablica[i] = 100 - i * 10;
    }


    printf("Tablica poczatkowa:\n");
    for ( i = 0; i < rozmiar; i++) {
        printf("%d ", tablica[i]);
    }
    printf("\n");


    printf("Podaj nowy rozmiar tablicy: ");
    scanf("%d", &nowyRozmiar);

    tablica = (int *)realloc(tablica, nowyRozmiar * sizeof(int));
    if (tablica == NULL) {
        printf("Blad alokacji pamieci podczas realokacji!\n");
        return 1;
    }


    if (nowyRozmiar > rozmiar) {
        for ( i = rozmiar; i < nowyRozmiar; i++) {
            tablica[i] = 15 + i - rozmiar;
        }
    }


    printf("Tablica po zmianie rozmiaru:\n");
    for (i = 0; i < nowyRozmiar; i++) {
        printf("%d ", tablica[i]);
    }
    printf("\n");


    free(tablica);

    return 0;
}


void zadanie5(){


    char bufor[200];
    char *dynamicznyBufor;
    size_t rozmiar,i;



    printf("Podaj zdanie : ");
    fgets(bufor, sizeof(bufor), stdin);


    rozmiar = strlen(bufor);
    if (bufor[rozmiar - 1] == '\n') {
        bufor[rozmiar - 1] = '\0';
        rozmiar--;
    }


    dynamicznyBufor = (char *)malloc((rozmiar + 1) * sizeof(char));
    if (dynamicznyBufor == NULL) {
        printf("Blad alokacji pamieci!\n");
        return 1;
    }


    strcpy(dynamicznyBufor, bufor);


    printf("Dynamiczny bufor przed operacjami: %s\n", dynamicznyBufor);


    for ( i = 0; i < rozmiar; i++) {
        dynamicznyBufor[i] = ~dynamicznyBufor[i];
    }


    printf("Dynamiczny bufor po negacji bitowej: ");
    for ( i = 0; i < rozmiar; i++) {
        printf("%c", dynamicznyBufor[i]);
    }
    printf("\n");


    for ( i = 0; i < rozmiar; i++) {
        dynamicznyBufor[i] = (unsigned char)dynamicznyBufor[i] >> 1;
    }


    printf("Dynamiczny bufor po przesunieciu bitowym w prawo o 1: ");
    for ( i = 0; i < rozmiar; i++) {
        printf("%c", dynamicznyBufor[i]);
    }
    printf("\n");


    free(dynamicznyBufor);

    return 0;
}



int main()
{
    zadanie1();
    //zadanie2();
   // zadanie3();
   // zadanie4();
    //zadanie5();

    return 0;
}
