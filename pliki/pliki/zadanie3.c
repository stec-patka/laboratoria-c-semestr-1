#include <stdio.h>

#include "zadanie3.h"



void Zadanie3() {

    unsigned short X, Y;

    printf("Podaj dwie liczby całkowite X i Y: ");

    scanf("%hu %hu", &X, &Y);



    printf("X AND Y = %hu\n", X & Y);

    printf("X OR Y = %hu\n", X | Y);

    printf("X XOR Y = %hu\n", X ^ Y);

    printf("NOT X = %hu\n", (unsigned short)~X);

    printf("NOT Y = %hu\n", (unsigned short)~Y);

    printf("X NAND Y = %hu\n", (unsigned short)~(X & Y));

    printf("X NOR Y = %hu\n", (unsigned short)~(X | Y));

    printf("X XNOR Y = %hu\n", (unsigned short)~(X ^ Y));

    printf("X << 4 = %hu\n", X << 4);

    printf("Y >> 3 = %hu\n", Y >> 3);

}
