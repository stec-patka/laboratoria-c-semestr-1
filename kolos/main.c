#include <stdio.h>
#include <stdlib.h>

void zad1()
{
   int rozmiar,i,j,k;
    printf("podaj rozmiar ramki\n");
    scanf("%d",&rozmiar);
    for(i=0;i<rozmiar;i++){//gora ramki
        printf("*");
    }
    printf("\n");
    for(j=1;j<rozmiar-1;j++){//ilosc wierszy z pustym
            putchar('*');
            for(k=1;k<rozmiar-1;k++){
            putchar(' ');
        }
     printf("*\n");
    }
    for(i=0;i<rozmiar;i++){//dol ramki
        printf("*");
    }
}

void zad2()
{
 int liczba,i,reszta,wynik;
 printf("podaj liczbe ");
 scanf("%d",&liczba);

 for(;;){
        if(liczba>0){
    reszta=liczba%3;
    wynik=liczba/3;
    printf("%4d | %d\n",liczba,reszta);
    liczba=wynik;
        }
        else if(liczba==0){
                printf("%4d",liczba);
            break;
        }
 }
}

void zad3()
{
    int a;
    printf("podaj liczbe ");
    scanf("%d",&a);
    int reversed = 0;

    // Reverse the digits of the integer
    while (a != 0) {
        int digit = a % 10; // Get the last digit
        reversed = reversed * 10 + digit; // Add it to the reversed number
        a = a / 10; // Remove the last digit from the original number
    }

    printf("Reversed number: %d\n", reversed);

}

void zad4()
{
    int i,tab[12],sumap_5=0,sumanp_3=0;
    printf("podaj 12 liczb ");
    for(i=0;i<12;i++){
        scanf("%d",&tab[i]);
    }
    for(i=0;i<12;i++){
        if(tab[i]%5==0){
            sumap_5+=tab[i];
        }
         if(tab[i]%3!=0){
            sumanp_3+=tab[i];
        }
    }

    printf("po sumowaniu : %d\n",sumap_5);
    printf("po odejmowaniu : %d",sumap_5-sumanp_3);

}

void zad5()
{
    int cena;
    printf("podaj cene ");
    scanf("%d",&cena);
}
int main()
{
    //zad1();
    //zad2();
    //zad3();
    zad4();
    return 0;
}
