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

void zad3()
{
       int i,j,n;
   printf("Podaj wysokosc choinki: ");
    scanf("%d", &n);

    // Rysowanie górnej części choinki (trójkąt)
    for (i = 1; i <= n; i++) {
        // Wyświetlanie spacji przed gwiazdkami
        for (j = 1; j <= n - i; j++) {
            putchar('-');
        }
        // Wyświetlanie gwiazdek
        for (j = 1; j <= (2 * i - 1); j++) {
            putchar('*');
        }
        putchar('\n');
    }
}

void zad4()
{
    int kierunek,wielkosc,j,i;
    printf("podaj kierunek \n");
    scanf("%d",&kierunek);
    printf("podaj wielkosc \n");
    scanf("%d",&wielkosc);
    /*
    *
    **
    ***
    ****
    */
    if(kierunek==1){
        for(i=0;i<wielkosc;i++){
            for(j=0;j<=i;j++){
                putchar('*');
            }
            putchar('\n');
        }
    }
    /*
    ****
    ***
    **
    *
    */
    else if(kierunek==2){
        for(i=0;i<wielkosc;i++){
            for(j=0;j<wielkosc-i;j++){
                putchar('*');
            }
            putchar('\n');
        }
    }
/*
   *
  **
 ***
****
*/
    else if(kierunek==3){
        for(i=0;i<wielkosc;i++){
            for(j=0;j<wielkosc-i;j++){
                putchar(' ');
            }
            for(j=0;j<=i;j++){
                putchar('*');
            }
            putchar('\n');
        }
    }
    /*
    ****
     ***
      **
       *
    */
    else if(kierunek==4){
        for(i=0;i<wielkosc;i++){
            for(j=0;j<i;j++){
                putchar(' ');
            }
            for(j=0;j<wielkosc-i;j++){
                putchar('*');
            }
            putchar('\n');
        }
    }
}
int main()
{
   //zad1();
  // zad2();
  //zad3();
  zad4();
    return 0;
}
