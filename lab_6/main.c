#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define W 8
#define K 12
void zad1()
{
    int tab[K][W];
    int i,j;
    for(i=0;i<W;i++){
        for(j=0;j<K;j++){
            tab[j][i]=i+j;
        }
          printf("\n");
    }

    for(i=0;i<W;i++){
        for(j=0;j<K;j++){
           printf("%3d",tab[j][i]);
        }
          printf("\n");
    }
}

void zad2()
{
    int a1,b1,c1,a2,c2,b2;
    float x,y,w,wx,wy;
    int tab[2][3];
    printf("podaj a1: ");
    scanf("%d",&a1);
    printf("podaj b1: ");
    scanf("%d",&b1);
    printf("podaj c1: ");
    scanf("%d",&c1);
    printf("podaj a2: ");
    scanf("%d",&a2);
    printf("podaj b2: ");
    scanf("%d",&b2);
    printf("podaj c2: ");
    scanf("%d",&c2);

    a1==tab[0][0];
    b1==tab[0][1];
    c1==tab[0][2];
    a2==tab[1][0];
    b2==tab[1][1];
    c2==tab[1][2];




    printf("%dx + %dy = %d\n",a1,b1,c1);
    printf("%dx + %dy = %d\n",a2,b2,c2);

     w = a1 * b2 - a2 * b1;
    wx = c1 * b2 - c2 * b1;
    wy = a1 * c2 - a2 * c1;

     if (w != 0) {
        // Układ ma jedno rozwiązanie
        x = (float)wx / w;
        y = (float)wy / w;
        printf("Uklad ma jedno rozwiazanie:\n");
        printf("x = %.2f\n", x);
        printf("y = %.2f\n", y);
    } else if (wx == 0 && wy == 0) {
        // Układ ma nieskończenie wiele rozwiązań
        printf("Uklad ma nieskonczenie wiele rozwiazan.\n");
    } else {
        // Układ jest sprzeczny
        printf("Uklad jest sprzeczny.\n");
    }

}

void zad3()
{
    int tab[3][3];
    int i,j,w;

    // Inicjalizacja generatora losowego
    srand(time(0));

    // Wypełnianie tablicy losowymi wartościami z przedziału [-99, 99]
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            tab[i][j] = (rand() % 199) - 99; // Zakres od -99 do 99
        }
    }

    for ( i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%3d",tab[i][j]);// Zakres od -99 do 99
        }
        printf("\n");
    }
    w=tab[0][0]*tab[1][1]*tab[2][2]+tab[0][1]*tab[1][2]*tab[2][0]+tab[0][2]*tab[1][0]*tab[2][1]-(tab[0][2]*tab[1][1]*tab[2][0]+tab[0][0]*tab[1][2]*tab[2][1]+tab[0][1]*tab[1][0]*tab[2][2]);
printf("%d",w);


}


void zad4()
{
   int tab[3][4];
   int tab1[3][4];
   int tab2[3][4];
    int i,j,w;

    // Inicjalizacja generatora losowego
    srand(time(0));

    // Wypełnianie tablicy losowymi wartościami z przedziału [-99, 99]
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 4; j++) {
            tab[i][j] = (rand() % 199) - 99; // Zakres od -99 do 99
        }
    }
     for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 4; j++) {
            tab1[i][j] = (rand() % 199) - 99; // Zakres od -99 do 99
        }
    }

    for ( i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%3d",tab[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for ( i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%3d",tab1[i][j]);
        }
        printf("\n");
    }
printf("\n");
 for(i=0;i<3;i++){
    for(j=0;j<4;j++){
        tab2[i][j]=tab[i][j]+tab1[i][j];
    }
 }

 for ( i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%3d",tab2[i][j]);
        }
        printf("\n");
    }

}


void zad5_1()
{
    int i,j;
 int tab1[2][3]={{1,0,2},{-1,3,1}};
 int tab2[3][2]={{3,1},{2,1},{1,0}};
 int tabw[2][2];
 tabw[0][0]=tab1[0][0]*tab2[0][0]+tab1[0][1]*tab2[1][0]+tab1[0][2]*tab2[2][0];
 tabw[0][1]=tab1[0][0]*tab2[0][1]+tab1[0][1]*tab2[1][1]+tab1[0][2]*tab2[2][1];
 tabw[1][0]=tab1[1][0]*tab2[0][0]+tab1[1][1]*tab2[1][0]+tab1[1][2]*tab2[2][0];
 tabw[1][1]=tab1[1][0]*tab2[0][1]+tab1[1][1]*tab2[1][1]+tab1[1][2]*tab2[2][1];

  for ( i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%3d",tab1[i][j]);
        }
        printf("\n");
    }
     printf("\n");

     for ( i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%3d",tab2[i][j]);
        }
        printf("\n");
    }
     printf("\n");
     for ( i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%3d",tabw[i][j]);
        }
        printf("\n");
    }
}
void zad5_2()
{
      int i,j;
 int tab1[2][3];
 int tab2[3][2];
 int tabw[2][2];

 srand(time(0));

    for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 3; j++) {
            tab1[i][j] = (rand() % 19) - 9; // Zakres od -9 do 9
        }
    }
     for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 2; j++) {
            tab2[i][j] = (rand() % 19) - 9; // Zakres od -9 do 9
        }
    }



 tabw[0][0]=tab1[0][0]*tab2[0][0]+tab1[0][1]*tab2[1][0]+tab1[0][2]*tab2[2][0];
 tabw[0][1]=tab1[0][0]*tab2[0][1]+tab1[0][1]*tab2[1][1]+tab1[0][2]*tab2[2][1];
 tabw[1][0]=tab1[1][0]*tab2[0][0]+tab1[1][1]*tab2[1][0]+tab1[1][2]*tab2[2][0];
 tabw[1][1]=tab1[1][0]*tab2[0][1]+tab1[1][1]*tab2[1][1]+tab1[1][2]*tab2[2][1];

  for ( i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%3d",tab1[i][j]);
        }
        printf("\n");
    }
     printf("\n");

     for ( i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%3d",tab2[i][j]);
        }
        printf("\n");
    }
     printf("\n");
     for ( i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%3d",tabw[i][j]);
        }
        printf("\n");
    }
}

void zad6()
{
    int i,j;
    short int tab[5][8];
    int tab1[5][8]={0};
    int tab2[5][8]={1,2,3,4,5,6,7,8,9,0,0,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9};
    int tab3[5][8];

    srand(time(NULL));
     for ( i = 0; i < 5; i++) {
        for ( j = 0; j < 8; j++) {
            tab3[i][j] = (rand() % 199) - 99; // Zakres od -99 do 99
        }
    }

    for ( i = 0; i < 5; i++) {
        for (j = 0; j < 8; j++) {
            printf("%4d",tab[i][j]);
        }
        printf("\n");
    }
    printf("\n");
     for ( i = 0; i < 5; i++) {
        for (j = 0; j < 8; j++) {
            printf("%4d",tab1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
     for ( i = 0; i < 5; i++) {
        for (j = 0; j < 8; j++) {
            printf("%4d",tab2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
     for ( i = 0; i < 5; i++) {
        for (j = 0; j < 8; j++) {
            printf("%4d",tab3[i][j]);
        }
        printf("\n");
    }
}

void zad7()
{
    int i,j,k;
    int tab[3][5][7];
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            for(k=0;k<7;k++){
                tab[i][j][k]=i*j*k;
                printf("%4d",tab[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
     printf("\n");

     for(j=0;j<5;j++){
        for(i=0;i<3;i++){
            for(k=0;k<7;k++){
                tab[i][j][k]=i*j*k;
                printf("%4d",tab[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
     printf("\n");


     for(k=0;k<7;k++){
        for(i=0;i<3;i++){
            for(j=0;j<5;j++){
                tab[i][j][k]=i*j*k;
                printf("%4d",tab[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
     printf("\n");

     for(k=0;k<7;k++){
        for(j=0;j<5;j++){
            for(i=0;i<3;i++){
                tab[i][j][k]=i*j*k;
                printf("%4d",tab[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
     printf("\n");

     for(j=0;j<5;j++){
        for(k=0;k<7;k++){
            for(i=0;i<3;i++){
                tab[i][j][k]=i*j*k;
                printf("%4d",tab[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
     printf("\n");

     for(i=0;i<3;i++){
        for(k=0;k<7;k++){
            for(j=0;j<5;j++){
                tab[i][j][k]=i*j*k;
                printf("%4d",tab[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
     printf("\n");
}

void zad8()
{
  int i,j,x,y,min,max,mink,maxk;
  int tab[8][12];
  int suma_r=0;
  int suma_k=0;
  float sre_r,sre_k;

  srand(time(NULL));
     for ( i = 0; i < 8; i++) {
        for ( j = 0; j < 12; j++) {
            tab[i][j] = (rand() % 199) - 99; // Zakres od -99 do 99
        }
    }


     for ( i = 0; i < 8; i++) {
        for (j = 0; j < 12; j++) {
            printf("%4d",tab[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("podaj wiersz od 1-8: ");
    scanf("%d",&x);


    //szukanie minimum
    min=max=tab[x-1][0];

    for(i=0;i<12;i++){
        if(tab[x-1][i]<min){
            min=tab[x-1][i];
        }
        if(tab[x-1][i]>max){
            max=tab[x-1][i];
        }
    }


    for(i=0;i<12;i++){
        suma_r+=tab[x-1][i];

    }
    printf("maximum w tym rzedzie wynosi: %d\n",max);
    printf("minimum w tym rzedzie wynosi: %d\n",min);
    printf("suma liczb w wybranym rzedzie wynosi: %d\n",suma_r);
    sre_r=(float)suma_r/12;
    printf("srednia z tych liczb wynosi: %f\n",sre_r);
printf("\n");

    //////////////////////////////////////

     printf("podaj kolumne od 1-12: ");
    scanf("%d",&y);

    mink=maxk=tab[0][y-1];
    for(i=0;i<8;i++){
        if(tab[i][y-1]<mink){
            mink=tab[i][y-1];
        }
        if(tab[i][y-1]>maxk){
            maxk=tab[i][y-1];
        }
    }


      for(i=0;i<8;i++){
        suma_k+=tab[i][y-1];

    }
    printf("maximum w tej kolumnie wynosi: %d/n",maxk);
    printf("minimum w tej kolumnie wynosi: %d\n",mink);
    printf("suma liczb w wybranej kolumnie wynosi: %d\n",suma_k);
    sre_k=(float)suma_k/8;
    printf("srednia z tych liczb wynosi: %f\n",sre_k);
}
void zad9()
{

}


void zad10()
{

}
int main()
{
   //zad1();
   //zad2();
   //zad3();
   //zad4();
   //zad5_1();
   //zad5_2();
   //zad6();
   //zad7();
   zad8();
  // zad9();
  // zad10();
    return 0;
}
