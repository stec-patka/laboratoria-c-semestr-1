#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void zad4() {
float x;
    printf("podaj liczbe\n");
    scanf("%f",&x);
if (x<-10){
    printf("czerwony");
}
if(x==-10 || x==10 || x==0){
    printf("czarny");
}
if(x>-10 && x<0){
    printf("zielony");
}
if(x>0 && x<10){
    printf("niebieski");
}
else{
    printf("zolty");
}
    return 0;
}

void zad5(){

int R,G,B;
printf("podaj wartosc RGB \n");
scanf("%d %d %d",&R,&G,&B);

if(R==0 && G==0 && B==0){
    printf("czarny");
}
if(R==1 && G==1 && B==1){
    printf("bialy");
}
if(R==1 && G==1 && B==0){
    printf("zolty");
}
if(R==1 && G==0 && B==1){
    printf("roz");
}
if(R==1 && G==0 && B==0){
    printf("czerwony");
}
if(R==0 && G==1 && B==1){
    printf("jansy_niebieski");
}
if(R==0 && G==0 && B==1){
    printf("niebsieki");
}
if(R==0 && G==1 && B==0){
    printf("zielony");
}
return 0;
}

void zad6()
{
    float x;
    printf("podaj liczbe aby obliczyc jej modul\n");
    scanf("%f",&x);
    if(x>=0){
        printf("|x|= %f ",x);
    }
    else{
        x=x*(-1);
        printf("|x|= %f ",x);
    }
}

void zad7()
{
    int x,y,zmi;
    printf("podaj dwie liczby\n");
    scanf("%d %d",&x,&y);
    zmi=x;
    x=y;
    y=zmi;
    printf("zmienne po zmianie %d i %d",x,y);

}

void zad8()
{
   int x,y;
   float m;
    printf("podaj cz.rzecz i cz.uroj liczby zespolonej \n");
    scanf("%d %d",&x,&y);
    m=x*x+y*y;
    printf("%f",m);
    printf("modul liczby zesppolonej wynosi %f",sqrt(m));

}

void zad9()
{
    float a,b,c,d,x0,x1,x2;
   printf("funkcja kwadratowa y=axx+bx+c\n");
   printf("podaj wartosc a \n");
   scanf("%f",&a);
   printf("podaj wartosc b \n");
   scanf("%f",&b);
   printf("podaj wartosc c \n");
   scanf("%f",&c);

    printf("obliczamy dalte aby sprawdzic istnienie pierwiastkow funkcji\n");
    d=(b*b)-4*a*c;
    printf("delta= %f",d);

    if(d<0){
        printf("brak miejsc zerowych");
    }
    else if(d==0){
        x0= -b/2*a;
        printf("funkcja ma jedno miejsce zerowe rowne %f",x0);
    }
    else if(d>0){
        x1=(-b-sqrt(d))/2*a;
        x2=(-b+sqrt(d))/2*a;
        printf("funkcja ma dwa miejsca zerowe rowne %f , %f",x1,x2);
    }
}

void zad10()
{
    float a1,b1,c1,a2,b2,c2,w,wx,wy,x,y;
   printf("uklad rownan\n");
   printf("podaj wartosc a1 \n");
   scanf("%f",&a1);
   printf("podaj wartosc b1 \n");
   scanf("%f",&b1);
   printf("podaj wartosc c1 \n");
   scanf("%f",&c1);
   printf("podaj wartosc a2 \n");
   scanf("%f",&a2);
   printf("podaj wartosc b2 \n");
   scanf("%f",&b2);
   printf("podaj wartosc c2 \n");
   scanf("%f",&c2);
   w=a1*b2-b1*a2;
   wx=c1*b2-b1*c2;
   wy=a1*c2-c1*a2;
   printf("w=%f\n",w);
   if(w!=0){
    x=wx/w;
    y=wy/w;
    printf("istnieje dokladnie jedno rozwiazanie x=%f i y=%f\n",x,y);

   }
   if(w==0 && wx==0 && wy==0){
    printf("uklad posida nieskonczenie wiele rozwiazan jest nieoznaczony\n");

   }
   if (w==0 && (wx!=0 || wy!=0)){
    printf("uklad sprzeczny brak rozwiazan\n");
   }

}




int main() {
// zad4();
//zad5();
//zad6();
//zad7();
 //zad8();
//zad9();
zad10();
}
