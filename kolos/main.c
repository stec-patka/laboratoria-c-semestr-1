#include <stdio.h>
#include <stdlib.h>

void zad1()
{
   int rozmiar,i,j,k;
    printf("podaj rozmiar ramki\n");
    scanf("%d",&rozmiar);
    for(i=0;i<rozmiar;i++){//gora ramki
        printf("*");
    }
    printf("\n");
    for(j=1;j<rozmiar-1;j++){//ilosc wierszy z pustym
            putchar('*');
            for(k=1;k<rozmiar-1;k++){
            putchar(' ');
        }
     printf("*\n");
    }
    for(i=0;i<rozmiar;i++){//dol ramki
        printf("*");
    }
}

void zad2()
{

}

void zad3()
{
    int liczba;
    printf("podaj liczbe ");
    scanf("%d",&liczba);

}

int main()
{
    //zad1();
    //zad2();
    zad3();
    return 0;
}
