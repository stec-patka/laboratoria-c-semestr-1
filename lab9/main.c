#include <stdio.h>
#include <stdlib.h>

#define K 12
#define W 8


//zad 1
void wczytaj(int *a, int *b, int *c)
{
    printf("podaj trzy liczby");
   scanf("%d %d %d",a,b,c);
}
void sortuj(int *a, int *b, int *c)
{
    int temp;
    if(*a > *b){
        temp=*a;
        *a=*b;
        *b=temp;
    }
    if(*a>*c){
        temp=*a;
        *a=*c;
        *c=temp;
    }
    if(*b>*c){
        temp=*b;
        *b=*c;
        *c=temp;
    }
}

void drukuj(const int *a, const int *b, const int *c)
{
   printf("posortowane wartosi %d, %d, %d",*a,*b,*c);
}


//zad2
void wczyt(int *a, int *b)
{
    printf("podaj pierwsza liczbe");
    scanf("%d",a);
    printf("podaj druga liczbe");
    scanf("%d",b);
}
void operacje_proste(int a, int b, int *suma, int *roznica, int *iloczyn)
{
    *suma=a+b;
    *roznica=a-b;
    *iloczyn=a*b;
}
void operacje_zaawansowane(int a, int b, float *iloraz, float *srednia)
{
    *iloraz=(float)a/b;
    *srednia=(float)(a+b)/2;

}
void wyniki(const int *suma, const int *roznica, const int *iloczyn, const float *iloraz, const float *srednia,int *a, int *b)
{
    printf("a wynosi: %d\n",*a);
    printf("b wynosi: %d\n",*b);
    printf("suma a i b wynosi: %d\n",*suma);
    printf("roznica a i b wynosi: %d\n",*roznica);
    printf("iloczyn a i b wynosi: %d\n",*iloczyn);
    printf("iloraz a i b wynosi: %f\n",*iloraz);
    printf("srednia a i b wynosi: %f\n",*srednia);
}

void ustaw(int tab[], int rozmiar)
{
    int i;
    for(i=0;i<rozmiar;i++){
        *tab=(i+1)*10;
        tab++;
    }

}
void druk(const int tab[], const int rozmiar_tab, int start, int ile)
{
    int j=0;
    int koniec=start+ile;
     printf("wydruk :");
    while(j<rozmiar_tab && j<koniec){
        if (j>=start && j<=koniec){
          printf("%d ",*tab);
        }
        tab++;
        j++;
    }
}

int* lewa(int tab[])
{
    int i;
    for(i=0;i<5;i++){
        *tab=i;
        tab++;
    }
    return tab;
}

int srodek(int tab[])
{
     int i;
    for(i=0;i<7;i++){
        *tab=i*i;
        tab++;
    }
    return tab;
}

int prawa(int tab[])
{
     int i;
    for(i=0;i<8;i++){
        *tab=i*5;
        tab++;
    }
    return tab;
}

void drukowanie(int const tab[],int rozmiar)
{
    int i;
    for(i=0;i<rozmiar;i++){
    printf("%d ",*tab);
    tab++;
    }

}

void ustawianie(int tab[][W])
{
    int i,j;
    for(i=1;i<=W;i++){
        for(j=1;j<=K;j++){
            **tab=i*j;
            printf("%d ",**tab);
            //printf("%d %d ---\n ", i, j);
            *tab++;
        }

        printf("\n");

    }

}

int main()
{
   //zadanie1
   //  int a,b,c;
  // wczytaj(&a,&b,&c);
  // sortuj(&a,&b,&c);
  // drukuj(&a,&b,&c);

  //zadanie2
 /* int a,b;
  int suma, roznica, iloczyn;
   float iloraz,srednia;
   wczyt(&a,&b);
   operacje_proste(a,b,&suma,&roznica,&iloczyn);
   operacje_zaawansowane(a,b,&iloraz,&srednia);
   wyniki(&suma,&roznica,&iloczyn,&iloraz,&srednia,&a,&b);
   */

   //zadanie 3
  /* int start,ile;
   int rozmiar=100;
   int tab[rozmiar];

   ustaw(tab,rozmiar);
   printf("podaj cyfre indeksu od ktorego drukujemy");
   scanf("%d",&start);
   printf("podaj ile elementow drukujemy");
   scanf("%d",&ile);
   druk(tab,rozmiar,start,ile);*/

   //zadanie4
   /*int roz=20;
   int tab[roz];
   int zakonczone = lewa(tab);
   zakonczone=srodek(zakonczone);
   zakonczone=prawa(zakonczone);
   drukowanie(tab,roz);*/

   //zadanie 5
   int tab[K][W];
   ustawianie(tab);

   return 0;
}



// gownaiane zadanie 5

#include <stdio.h>

#define ROWS 12 // Liczba wierszy
#define COLS 8  // Liczba kolumn

// Funkcja ustawiająca wartości w tablicy - tabliczka mnożenia od 1
void ustaw_tabliczke_mnozenia(int *tab, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(tab + i * cols + j) = (i + 1) * (j + 1); // Obliczenie wartości
        }
    }
}

// Funkcja drukująca całą tablicę
void drukuj_cala_tablice(const int *tab, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d", *(tab + i * cols + j)); // Dostęp za pomocą wskaźnika
        }
        printf("\n");
    }
}

// Funkcja drukująca fragment tablicy
void drukuj_fragment_tablicy(const int *tab, int rows, int cols, int start_row, int start_col, int end_row, int end_col) {
    for (int i = start_row; i <= end_row && i < rows; i++) {
        for (int j = start_col; j <= end_col && j < cols; j++) {
            printf("%4d", *(tab + i * cols + j)); // Dostęp za pomocą wskaźnika
        }
        printf("\n");
    }
}

int main() {
    int tablica[ROWS][COLS];

    // Ustawienie wartości w tablicy
    ustaw_tabliczke_mnozenia((int *)tablica, ROWS, COLS);

    // Drukowanie całej tablicy
    printf("Cala tablica:\n");
    drukuj_cala_tablice((const int *)tablica, ROWS, COLS);

    // Drukowanie fragmentu tablicy (przykład: wiersze 4-6, kolumny 2-5)
    printf("\nFragment tablicy (wiersze 4-6, kolumny 2-5):\n");
    drukuj_fragment_tablicy((const int *)tablica, ROWS, COLS, 4, 2, 6, 5);

    return 0;
}

