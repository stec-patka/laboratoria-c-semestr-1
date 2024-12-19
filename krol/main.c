#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//odwracanie tablicy

void odwracanie(int *tab,int N)
{
    int i;
    for(i=0;i<N/2;i++){
        int temp=tab[i];
        tab[i]=tab[N-i-1];
        tab[N-i-1]=temp;
    }
}
void odwracanie_m()
{
    int i;
    int N=6;
   int tab[6]={1,2,3,4,5,6};

   printf("przed odwroceniem: ");
   for (i=0;i<N;i++){
    printf("%d ",tab[i]);
   }
   printf("\n");

   odwracanie(tab,N);
    printf("po odwroceniu: ");
   for (i=0;i<N;i++){
    printf("%d ",tab[i]);
   }
   printf("\n");
}
void srednia(int *tab)
{
  int i,suma=0;
  for(i=0;i<5;i++){
    suma+=tab[i];
  }
  printf("stednia wynosi: %f",(float)suma/5);
}

void srednia_m()
{
   int tab[5]={2,3,4,5,6};
   srednia(tab);

}

void min_max(int *tab,int *min, int *max,int n)
{
    int i;
    *min=tab[0];
    *max=tab[0];

    for (i=0;i<n;i++){
        if(tab[i]<*min){
            *min=tab[i];
        }
        if(tab[i]>*max){
            *max=tab[i];
        }
    }
    printf("wartosc min: %d, watrosc max: %d",*min,*max);

}

void min_max_m()
{
    int i;
    int min,max;
    int tab[10];
    int n=10;
    srand(time(NULL));
    for(i=0;i<10;i++){
        tab[i]=rand()%91-10;
    }
    for (i=0;i<10;i++){
    printf("%d ",tab[i]);
   }
   printf("\n");

   min_max(tab,&min,&max,n);
}
int main()
{
   // odwracanie_m();
   // srednia_m();
   min_max_m();
    return 0;
}