#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define W 10
#define K 15
void wczyt(char *c, int *i, float *f, double *d)
{
    printf("podaj znak: ");
    scanf("%c",c);
     printf("podaj liczbe: ");
    scanf("%d",i);
     printf("podaj liczbe: ");
    scanf("%f",f);
     printf("podaj liczbe: ");
    scanf("%lf",d);
}
void modyfikacja(char *c, int *i, float *f, double *d)
{
    (*c)++;
    *i=abs(*i);
    *f=sqrt(*f);
    *d=pow(*d,3);

}

void druk(char *c, int *i, float *f, double *d)
{
    printf("wyniki:\n");
    printf("znak: %c",*c);
    printf("liczba calkowita: %d",*i);
     printf("liczba zmiennoprzecinkowa: %f",*f);
      printf("liczba zmiennoprzecinkowa: %lf",*d);
}

void modyfikuj_2(int *a, int *b, int *c)
{
    *a=50;
    *b=100;
    *c=200;

}

void druk_tab(int *tab,int roz)
{
    int i;
    for(i=0;i<roz;i++){
        printf("%3d ",tab[i]);
    }
    printf("\n");
}

//void ustaw_tab(int *poczatek, int *koniec)
//{
   // while (poczatek <= koniec){
     //   *poczatek
   // }
//}



void ustaw(int tab[][K]){
    int i,j;
    for (i=0;i<W;i++){
        for (j=0;j<K;j++){
            tab[i][j] = W + K - i - j;
        }
    }
}

void druk5(int tab[][K]){
    int i,j;
    for (i=0;i<W;i++){
        for (j=0;j<K;j++){
            printf("%3d",tab[i][j]);
        }
        printf("\n");
    }
}

void druk_ograniczony(int tab[][K], int x1, int x2, int y1, int y2){
    int i,j;
    for (i=0;i<W;i++){
        for (j=0;j<K;j++){
            if(i >= x1 && i <= x2 && j >= y1 && j <= y2){
                printf("%3d",tab[i][j]);
            }
        }
        printf("\n");
    }
}

int main()
{
    //zadanie 1
    /*char c;
    int i;
    float f;
    double d;
    wczyt(&c,&i,&f,&d);
    modyfikacja(&c,&i,&f,&d);
    druk(&c,&i,&f,&d);*/

    //zadanie 2
   /* int i,j;
    int tab[5][5]={0};
    int *wsk1=&tab[1][1];
    int *wsk2=&tab[2][2];
    int *wsk3=&tab[3][3];

    modyfikuj_2(wsk1,wsk2,wsk3);

    for(i=0;i<5;i++){
       for(j=0;j<5;j++){
           printf("%4d",tab[i][j]);
       }
       printf("\n");
    }
*/

//zadanie 3
/*int i,j,k;
int roz1=10;
int roz2=12;
int roz3=14;
int tab[roz1];
for(i=0;i<roz1;i++){
    tab[i]=30-(3*i);
}

int tab2[roz2];
for(j=0;j<roz2;j++){
    if(j%2==0){
        tab2[j]=(j/2)+1;
    }
    else{
        tab2[j]=-(j/2+1);
    }
}
int tab3[roz3];
for(k=0;k<roz3;k++){
    if(k<5 || k>=10){
        tab3[k]=0;
    }
    else{
        tab3[k]=(k-5)*5+10;
    }
}

printf("wydruk tablicy 1");
druk_tab(tab,roz1);

printf("wydruk tablicy 2");
druk_tab(tab2,roz2);

printf("wydruk tablicy 3");
druk_tab(tab3,roz3);
*/

//zadanie 4
/*int tab[5][8];
int *poczatek=tab[0][0];
int *koniec=tab[4][7];

*/
//zadanie5
   int tab[W][K];
    int x1, x2, y1, y2;
    ustaw(tab);
    druk5(tab);

    printf("Podaj ograniczenie od góry: ");
    scanf("%d", &x1);
    printf("Podaj ograniczenie od dołu: ");
    scanf("%d", &x2);
    printf("Podaj ograniczenie od lewej: ");
    scanf("%d", &y1);
    printf("Podaj ograniczenie od prawej: ");
    scanf("%d", &y2);
    druk_ograniczony(tab, x1, x2, y1, y2);

    return 0;
}
