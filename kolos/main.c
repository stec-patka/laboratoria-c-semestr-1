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
    int normalna;
    printf("podaj liczbe ");
    scanf("%d",&normalna);
    int odwrocona = 0;
    int tymczasowa = normalna;

    while (tymczasowa != 0) {
        int ostatnia = tymczasowa % 10;
        odwrocona = odwrocona * 10 + ostatnia;
        tymczasowa = tymczasowa / 10;
    }

    printf("%d -> %d\n", normalna, odwrocona);
    printf("%d + %d = %d", normalna, odwrocona, normalna+odwrocona);

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
    int ilosc_cen=4;
    int ceny[ilosc_cen];
    float ceny_po_znizkach[ilosc_cen];
    float znizki[] = {1.0, 0.75, 0.5, 0.2};
    int temp,i,m, n;
    int czy_nastapila_zamiana;

    for(i=0;i<ilosc_cen;i++){
        printf("podaj cene nr %d: ",i+1);
        scanf("%d",&ceny[i]);
    }

    // Pętla wykonująca sortowanie
    for ( i = 0; i < ilosc_cen - 1; i++) {
        czy_nastapila_zamiana = 0;  // Zmienna do sprawdzenia, czy zaszła jakakolwiek zamiana

        // Pętla do porównywania sąsiednich elementów
        for ( m = 1; m < ilosc_cen - i; m++) {
            if (ceny[m - 1] < ceny[m]) {
                // Zamiana miejscami
                temp = ceny[m - 1];
                ceny[m - 1] = ceny[m];
                ceny[m] = temp;
                czy_nastapila_zamiana = 1;
            }
        }

        // Jeśli w tym przejściu nie było żadnej zamiany, tablica jest już posortowana
        if (!czy_nastapila_zamiana) {
            break;
        }
    }

    for(i=0;i<ilosc_cen;i++){
        ceny_po_znizkach[i] = ceny[i] * znizki[i];
    }

    for(i=0;i<ilosc_cen;i++){
        printf("%d -> %f \n",ceny[i], ceny_po_znizkach[i]);
    }

}

int main()
{
    //zad1();
    //zad2();
    //zad3();
    //zad4();
    zad5();
    return 0;
}
