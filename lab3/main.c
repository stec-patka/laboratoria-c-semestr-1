#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void zad1()
{
    int x,i;
    printf("podaj liczbe \n");
    scanf("%d",&x);
    for ( i=0;i<x;i++)
    {
        printf("*");
    }
}

 void zad2()
 {
     int N,i;
     unsigned long long silnia=1;
     printf("podaj liczbe do obliczneia silni\n");
     scanf("%d",&N);
     for( i=1;i<=N;i++)
    {
        silnia*=i;
        printf("silnia wynos %llu\n",silnia);
    }
 }

  void zad3()
 {
     printf("liczymy sume liczb od 1 do 1000\n");
    int i,start,end,step;
    printf("podaj poczatek\n");
    scanf("%d",&start);
    printf("podaj koniec\n");
    scanf("%d",&end);
    printf("podaj co ile sumujemy\n");
    scanf("%d",&step);
     int suma=0;
     for( i=start;i<=end;i+=step)
     {
         suma+=i;

     }
     printf("suma wynosi %d",suma);
 }

void zad4()
{
    float x,k,p;
  for(;;)
  {
      printf("podaj liczbe \n");
    scanf("%f",&x);
    if(x<0)
    {
        k=x*x;
        printf("kwadrat tej liczby wynosi %f\n",k);
    }
    if(x>0){
        printf("pierwiastek z tej liczby wynosi %f\n",sqrt(x));

    }
    if(x==0){
        break;
    }
  }

}

void zad5()
{
    int x,y=0;
    printf("podaj liczbe \n");
    scanf("%d",&x);
    for(;;){


        if(x%2==0){
            x/=2;
            printf("wynik wynosi %d\n",x);
        }
        else if(x==1){
            break;
        }
        else if(x%2!=0){
            x=x*3+1;
            printf("wynik wynosi %d\n",x);
        }

        y+=1;
        printf("ilosc operacji %d\n",y);
    }

}

void zad6()
{
unsigned int y,liczba=0;
srand(time(NULL));
unsigned int x=rand()%1000+1;
for(;;)
{
    scanf("%u",&y);
    if(y<x){
        printf("za malo\n");
    }
    if(y>x){
        printf("za duzo\n");
    }
    if(x==y){
        printf("zgadles\n");
        printf("za %u razem ",liczba);
        break;
    }
    liczba++;

}

}

void zad7()
{
    int i,x,min,max;
  int tab[100];
  srand(time(NULL));
  for(i=0;i<100;i++){
    x=rand()%81+10;
    tab[i]=x;
    printf("tab[%d]=%d\n",i,tab[i]);

  }
  min=max=tab[0];
  for(i=1;i<100;i++){
    if(tab[i]<min){
        min=tab[i];
    }
    if(tab[i]>max){
        max=tab[i];
    }
  }
  printf("wartosc najmniejsza wynosi %d a wartosc najwieksza %d",min,max);
}

void zad8()
{
    int tab[10];
    int i,wartosc,licznik=0,suma=0;
    float srednia;
    for(i=0;i<10;i++){
        printf("element %d tablicy",i+1);
        scanf("%d",&tab[i]);
        suma+=tab[i];
    }
    srednia=suma/10;
    printf("srednia wynosi %f",srednia);

    printf("podaj liczbe do sprawdzenia\n");
    scanf("%d",&wartosc);
    for(i=0;i<10;i++){
        if(tab[i]==wartosc){
            licznik++;
        }
    }
    if(licznik>0){
         printf("liczba wystepuje %d razy",licznik);
    }
    else{
        printf("liczba nie wystepuje");
    }


}

void zad9()
{
    int i,j,n;
   int tab1[11];
   printf("tab1[]= ");
   for(i=0;i<11;i++){
    tab1[i]=4*i-25;
printf("%d, ",tab1[i]);
   }
printf("\n");
   int tab2[15];
   printf("tab2[]= ");
   for(j=0;j<15;j++){
    tab2[j]=2*j+3;
    if((j+1)%4==0){
        tab2[j]=-99;
    }
    printf("%d, ",tab2[j]);
   }

   printf("\n");
   int tab3[12];
   printf("tab3[]= ");
   for(n=0;n<12;n++){

    if(n==0){
        tab3[n]=-2;
    }
    else{
        tab3[n]=tab3[n-1]-n;
    }
    printf("%d,",tab3[n]);
   }

}


void zad10()
{
    int i;
    int tab1[]={5,6,7,8,9,10,11,12};
    int tab2[]={15,20,25,30,35,40};
    int tabw[12];
    int wielkosc_tab1=8;
    int wielkosc_tab2=6;
    int wielkosc_tabw=12;
    printf("tabela wynikowa ma wartosci:");
    for(i=0;i<12;i++){
        if(i<4){
            tabw[i]=tab1[i]-tab2[wielkosc_tab2-(4-i)];

        }
        else if(i<8){
            tabw[i]=tab1[i]*tab1[i-4];
        }
        else{
            tabw[i]=tab2[i-8]+tab1[i-4];
        }
         printf(" %d",tabw[i]);
    }

}
int main()
{
    //zad1();
    //zad2();
    //zad3();
    //zad4();
    //zad5();
    //zad6();
   // zad7();
   //zad8();
   //zad9();
   zad10();
    return 0;
}
