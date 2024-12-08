#include <stdio.h>
#include <stdlib.h>
///zad 1
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


///zad2
void wczyt(int *a, int *b)
{
    printf("podaj dwie liczby");
scanf("%d %d",a,b);
}
void operacje_proste(int a, int b, int *suma, int *roznica, int *iloczyn)
{
    *suma=*a+*b;
    *roznica=*a-*b;
    *iloczyn=*a*(*b);
}
void operacje zaawansowane(int a, int b, int *iloraz, int *srednia)
{

}
int main()
{
   int a,b,c;
   int suma, roznica, iloczyn;
   float iloraz,srednia;
  // wczytaj(&a,&b,&c);
  // sortuj(&a,&b,&c);
  // drukuj(&a,&b,&c);
    return 0;
}
