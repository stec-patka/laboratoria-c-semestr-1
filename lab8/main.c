#include <stdio.h>
#include <stdbool.h>

void zad1()
{
    char a;
    short b;
    int c;
    long long d;
    float e;
    double f;

    char *ptr_a = &a;
    short *ptr_b = &b;
    int *ptr_c = &c;
    long long *ptr_d = &d;
    float *ptr_e = &e;
    double *ptr_f = &f;

    printf("podaj znak ");
    scanf("%c",ptr_a);
    printf("podaj liczbe ");
    scanf("%hd",ptr_b);
    printf("podaj liczbe ");
    scanf("%d",ptr_c);
    printf("podaj liczbe ");
    scanf("%lld",ptr_d);
    printf("podaj liczbe ");
    scanf("%f",ptr_e);
    printf("podaj liczbe ");
    scanf("%lf",ptr_f);

    printf("podane zmienne %c, %hd, %d, %lld, %f, %lf ",a,b,c,d,e,f);
}

void zad2()
{
    int a;
    unsigned b;
    short c;
    long long d;
    char e;
    bool f;
    float g;
    double h;

    int *ptr_a = &a;
    unsigned *ptr_b = &b;
    short *ptr_c = &c;
    long long *ptr_d = &d;
    char *ptr_e = &e;
    bool *ptr_f = &f;
    float *ptr_g = &g;
    double *ptr_h = &h;

    puts( "Adres | Rozmiar zmiennej ");
    printf("%d %d  \n", ptr_a, sizeof( a ));
   printf("%d %d  \n", ptr_b, sizeof( b ));
printf("%d %d  \n", ptr_c, sizeof( c ));
printf("%d %d  \n", ptr_d, sizeof( d ));
printf("%d %d  \n", ptr_e, sizeof( e ));
printf("%d %d  \n", ptr_f, sizeof( f ));
printf("%d %d  \n", ptr_g, sizeof( g ));
printf("%d %d  \n", ptr_h, sizeof( h ));

}

void zad3()
{
    int x;
    int *a, *b, *c, *d, *e;

    e=&x;
    d=e;
    c=d;
    b=c;
    a=b;

    *a=6;
    printf("x wynosi: %d",x);
}


void zad4()
{
    int i;
    int tab[20];
    for(i=0;i<20;i++){
        tab[i]=i+1;
        printf("%d",tab[i]);
    }
    printf("\n");

    int *x=&tab[4];
    int *y=&tab[9];
    int *z=&tab[14];
    *x *=100;
    *y +=50;
    *z *= -1;

    for(i=0;i<20;i++){
        printf("%d",tab[i]);
    }
}

void zad5()
{
    int tab[6][8];
}





int main()
{
    //zad1();
    //zad2();
    //zad3();
    zad4();
   // zad5();
    return 0;
}
