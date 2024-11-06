#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

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
void zad5()
{
    srand(time(NULL));
    int i,j,x;
    for(i=0;i<24;i++){
        x=rand()%11+10;
        for(j=0;j<x;j++){
            putchar('*');
        }
        putchar('\n');
    }
}
void zad6()
{
     int i,x,y=0;
    for(i=1;i<=1000;i++){
            x=i;
        printf("badana liczba %d , ",x);

        // rozpoczecie kalkulacji
        for(;;){
            if(x%2==0){
                x/=2;

            }
            else if(x==1){
                break;
            }
            else if(x%2!=0){
                x=x*3+1;

            }

            y+=1;

        }
        // koniec kalkulacji

      printf("ilosc operacji %d\n",y);
    }
}
void zad7()
{
    unsigned int hajs;
    int i;
    printf("podaj ile siana ");
    scanf("%u",&hajs);
    int nominaly[]={500, 200, 100, 50, 20, 10, 5, 2, 1};
    int ilosc_nominalow[]={0,0,0,0,0,0,0,0,0};
    for(i=0;i<9;i++){
        ilosc_nominalow[i]=hajs/nominaly[i];
        hajs-=ilosc_nominalow[i]*nominaly[i];
        printf("%d x %d \n",ilosc_nominalow[i],nominaly[i]);
    }
}


void zad8()
{
    int i,j,k,mimodleglosc = 999,mimk,mimj; // wiecej niz 999 - 1 - maksymalna odleglosc
    srand(time(NULL));
    int liczby[10];

    for(i=0;i<10;i++){
       liczby[i]=rand()%999+1;
       printf("%d, ",liczby[i]);
    }
     printf("\n ");
    for(j=0;j<10;j++){
        for(k=j+1;k<10;k++){

            int aktualna_odleglosc = abs(liczby[k]-liczby[j]);
            if(mimodleglosc>aktualna_odleglosc)
            {
                mimodleglosc=aktualna_odleglosc;
                mimk=liczby[k];
                mimj=liczby[j];
                printf("kolejna min wartosc %d, dla liczb %d i %d \n",mimodleglosc,mimk,mimj);
            }
        }
    }
}

void wyswietl_tablice(int tab[], int n) {
    int i;
    for ( i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}
void zad9()
{
    int szerokosc, wysokosc, i, j;
    printf("podaj szerokosc i wysokosc ");
    scanf("%d %d",&szerokosc,&wysokosc);
    for(i=wysokosc;i>=1;i--){
        for(j=szerokosc;j>=1;j--){
            printf("%3d",i*j);
        }
        putchar('\n');
    }
}
// Algorytm sortowania bąbelkowego
void zad10() {
    int temp;
    int tab[12];
    int n=12,i,m;
    int czy_nastapila_zamiana;
    for(i=0;i<12;i++){
       tab[i]=rand()%999+1;
       printf("%d, ",tab[i]);
    }

    // Pętla wykonująca sortowanie
    for ( i = 0; i < n - 1; i++) {
        czy_nastapila_zamiana = 0;  // Zmienna do sprawdzenia, czy zaszła jakakolwiek zamiana

        // Pętla do porównywania sąsiednich elementów
        for ( m = 1; m < n - i; m++) {
            if (tab[m - 1] > tab[m]) {
                // Zamiana miejscami
                temp = tab[m - 1];
                tab[m - 1] = tab[m];
                tab[m] = temp;
                czy_nastapila_zamiana = 1;
            }
        }

        // Jeśli w tym przejściu nie było żadnej zamiany, tablica jest już posortowana
        if (!czy_nastapila_zamiana) {
            break;
        }
    }
    wyswietl_tablice(tab, 12);
}


int main()
{
   //zad1();
  // zad2();
  //zad3();
  //zad4();
  //zad5();
  //zad6();
  //zad7();
  //zad8();
  zad9();
  //zad10();
    return 0;
}
