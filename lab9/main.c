#include <stdio.h>
#include <stdlib.h>
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
        *tab[i]=(i+1)*10;
    }
}
void druk(const int tab, const int rozmiar_tab, int *i, int *e)
{
    int j;
    for(j=*i;j<=*e;j++){

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
   int start,ile;
   int tab[100];
   ustaw(tab,100);
   printf("podaj cyfre indeksu od ktorego drukujemy");
   scanf("%d",&start);
   printf("podaj ile elementow drukujemy");
   scanf("%d",&ile);
   druk(tab,rozmiar,start,ile);
   return 0;
}
