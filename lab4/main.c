#include <stdio.h>
#include <stdlib.h>

void zad1()
{
    int x,i,j;
    printf("podaj liczbe \n");
    scanf("%d",&x);
    for(i=0;i<x;i++){

        for(j=0;j<x;j++){
        putchar('*');
        }
        printf("\n");
    }
}

void zad2()
{
   int x,i,j;
    printf("podaj liczbe \n");
    scanf("%d",&x);
    for(i=0;i<x;i++){

        for(j=1;j<=i;j++){
        putchar('*');
        }
        printf("\n");
    }
}
int main()
{
   //zad1();
   //zad2();
    return 0;
}
