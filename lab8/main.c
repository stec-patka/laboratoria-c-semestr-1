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










int main()
{
    //zad1();
    zad2();
    return 0;
}
