#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void zad1()
{
    printf("nie bede przeszkadzac na lekcji");
}

//zad2
int g_a,g_b,g_suma,g_roznica,g_iloczyn;
float g_iloraz,g_srednia;
void wczytaj()
{
    printf("podaj dwie liczby: ");
    scanf("%d",&g_a);
    scanf("%d",&g_b);
}
void operacje_proste()
{
    g_suma=g_a+g_b;
    g_roznica=g_a-g_b;
    g_iloczyn=g_a*g_b;
}
void opcje_zaawansowane()
{
    g_iloraz=(float) g_a/g_b;
    g_srednia=(float) g_suma/2;
}
void wyniki()
{
    printf("suma wynosi: %d\n",g_suma);
    printf("roznica wynosi: %d\n",g_roznica);
    printf("iloczyn wynosi: %d\n",g_iloczyn);
    printf("iloraz wynosi: %f\n",g_iloraz);
    printf("srednia wynosi: %f\n",g_srednia);


}

void zad3()
{
    int a;
    int static c;
    printf("podaj liczbe: ");
    scanf("%d",&a);
    if(a%5==0){
        c++;
        printf("liczba jest podzielna przez 5: %d\n",a);
    }
    else{
        printf("liczba nie podzielna przez 5\n");
    }
    printf("licznik wynosi: %d\n",c);
}

void obwod_prostokata(int a, int b)
{
    int obw;
    obw=2*a+2*b;
    printf("obwod prostokata wynosi: %d\n",obw);
}
void pole_prostokata(int a, int b)
{
    int p;
    p=a*b;
    printf("pole prostokata wynosi: %d\n",p);
}

//zad5
int minimum(int x, int y, int z)
{
    int min=x;
    if(y<min){
        min=y;
    }
    if(z<min){
        min=z;
    }
    return min;
}
int maksimum(int x, int y, int z)
{
    int max=x;
   if(y>max){
     max=y;
   }
   if(z>max){
    max=z;
   }
   return max;
}


void zad6(int m)
{
    int i;
    for(i=0;i<m;i++){
        printf("*");
    }
    printf("\n");
}

float zad7(float a, float S)
{
    return 0.5*(a+S/a);
}

float zad8(float prev, float next)
{
    float dz=next/prev;
    printf("iloraz zmiennej next przez prev wynosi: %f\n",dz);
return next;
}

void zad9(int n)
{
    static int licznik=0;
    licznik++;
    printf("wartosc n wynosi: %d, licznik wunosi: %d\n",n,licznik);
    if (n==1){
        return;
    }
    else if (n%2==0){
        zad9(n/2);

    }
    else {
        zad9(3*n+1);

    }
}

void zad10(int n)
{
     printf("wartosc n wynosi: %d\n",n);
     zad10(n+1);
}
int main()
{
    int i;
   // for(i=0;i<100;i++){
   //zad1();}

   //zad2
   //wczytaj();
 //  operacje_proste();
  // opcje_zaawansowane();
  // wyniki();

  //for(i=0;i<10;i++){
   //zad3();}

   //zadanie4
   //int a,b;
   //printf("podaj wymiary prostokata: ");
    //scanf("%d",&a);
   // scanf("%d",&b);
 //obwod_prostokata(a,b);
   //pole_prostokata(a,b);

   //zadanie 5
   /*int x,y,z;
   printf("podaj trzy liczby: ");
   scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    printf("minimum wynosi: %d\n",minimum(x,y,z));
    printf("maksimum wynosi: %d\n",maksimum(x,y,z));
*/
//zadanie 6
/*int m;

for(;;){
printf("podaj ilczbe: ");
scanf("%d",&m);
if (m<0){
    printf("liczba ujemna");
    break;
}
   zad6(m);}
*/
   //zadanie 7
  /* float a,S;
   printf("podaj ilczbe: ");
   scanf("%f",&S);

   a=S;
   for(i=0;i<10;i++)
   {
       a=zad7(a,S);
       printf("iteracja nr %d: a=%.10f\n",i+1,a);
  }
   float pierw=sqrt(S);
   printf("pierwiastek z S za pomoca funkcji wynosi %f\n",pierw);
  */

  //zadanie 8
  float prev, next;
   printf("podaj liczbe: \n");
  scanf("%f",&prev);
   printf("podaj liczbe: \n");
  scanf("%f",&next);
  for(i=0;i<20;i++){
    float temp=zad8(prev,next);

    next=prev+next;
    prev=temp;
  }
  //zad8();
  //zadanie 9
  /*int n;
  printf("podaj liczbe: \n");
  scanf("%d",&n);
  zad9(n); */

  //zadanie 10
  /*int n=0;
   zad10(n);
    return 0;*/
}
