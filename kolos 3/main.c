#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 100
void zadanie1(){

// Funkcja zliczająca wystąpienia znaków w tekście
int liczZnaki(const char *tekst) {
    int licznik = 0;
    for (int i = 0; tekst[i] != '\0'; i++) {
        licznik++;
    }
    return licznik;
}

int main() {
    char bufor[BUFFER_SIZE];
    char znak1, znak2;
    int indeks;

    // Pobranie 2 znaków i liczby całkowitej dodatniej
    printf("Podaj pierwszy znak: ");
    scanf(" %c", &znak1);
    printf("Podaj drugi znak: ");
    scanf(" %c", &znak2);
    printf("Podaj liczbe calkowita dodatnia: ");
    scanf("%d", &indeks);

    // Pobranie zdania
    printf("Podaj zdanie (maksymalnie 100 znakow): ");
    getchar(); // Usunięcie znaku nowej linii
    fgets(bufor, BUFFER_SIZE, stdin);

    // Usunięcie znaku nowej linii na końcu, jeśli istnieje
    size_t dlugosc = strlen(bufor);
    if (bufor[dlugosc - 1] == '\n') {
        bufor[dlugosc - 1] = '\0';
    }

    // Wyświetlenie liczby znaków
    int liczbaZnakow = liczZnaki(bufor);
    printf("Liczba znakow w tekscie: %d\n", liczbaZnakow);

    // Zamiana znaku w podanym indeksie na '?'
    if (indeks < liczbaZnakow) {
        bufor[indeks] = '?';
    }

    // Zamiana wszystkich wystąpień znaku2 na znak1
    for (int i = 0; i < liczbaZnakow; i++) {
        if (bufor[i] == znak2) {
            bufor[i] = znak1;
        }
    }

    // Zamiana każdego znaku '_' na spację
    for (int i = 0; i < liczbaZnakow; i++) {
        if (bufor[i] == '_') {
            bufor[i] = ' ';
        }
    }

    // Wyświetlenie przetworzonego tekstu
    printf("Przetworzony tekst: %s\n", bufor);

    return 0;
}
}

void zadanie2(){

    // Definicja struktury
typedef struct {
    int A;
    int B;
    float przekatna;
} sProstokat;

// Funkcja wczytująca
void wczytajProstokat(sProstokat *prostokat) {
    printf("Podaj dlugosc boku A: ");
    scanf("%d", &prostokat->A);
    printf("Podaj dlugosc boku B: ");
    scanf("%d", &prostokat->B);

    // Obliczanie przekątnej
    prostokat->przekatna = sqrt(prostokat->A * prostokat->A + prostokat->B * prostokat->B);
}

// Funkcja drukująca
void drukujProstokat(const sProstokat prostokat) {
    printf("Bok A: %d\n", prostokat.A);
    printf("Bok B: %d\n", prostokat.B);
    printf("Przekatna: %.2f\n", prostokat.przekatna);
}

int main() {
    // Deklaracja dwóch obiektów typu sProstokat
    sProstokat prostokat1, prostokat2;

    // Wczytanie wartości pól dla obu prostokątów
    printf("Wczytywanie danych dla pierwszego prostokata:\n");
    wczytajProstokat(&prostokat1);

    printf("\nWczytywanie danych dla drugiego prostokata:\n");
    wczytajProstokat(&prostokat2);

    // Wyświetlenie wartości pól obu prostokątów
    printf("\nDane pierwszego prostokata:\n");
    drukujProstokat(prostokat1);

    printf("\nDane drugiego prostokata:\n");
    drukujProstokat(prostokat2);

    return 0;
}
}

void zadanie3(){

    // Funkcja do konwersji liczby na postać binarną
void toBinary(short n, char *output, int size) {
    for (int i = size - 1; i >= 0; i--) {
        output[i] = (n & 1) ? '1' : '0';
        n >>= 1;
    }
    output[size] = '\0';
}

int main() {
    short X, Y;
    char binX[17], binY[17], binResult[17];

    // Pobranie liczb X i Y
    printf("Podaj liczbe calkowita dodatnia X: ");
    scanf("%hd", &X);
    printf("Podaj liczbe calkowita dodatnia Y: ");
    scanf("%hd", &Y);

    // Operacje bitowe
    short andResult = X & Y;
    short orResult = X | Y;
    short xorResult = X ^ Y;
    short notX = ~X;
    short notY = ~Y;
    short nandResult = ~(X & Y);
    short norResult = ~(X | Y);
    short xnorResult = ~(X ^ Y);
    short shiftLeftX = X << 4;
    short shiftRightY = Y >> 3;

    // Konwersja wyników na postać binarną
    toBinary(X, binX, 16);
    toBinary(Y, binY, 16);

    printf("\nLiczby wejsciowe w postaci dziesietnej:\n");
    printf("X = %hd, Y = %hd\n", X, Y);
    printf("\nLiczby wejsciowe w postaci binarnej:\n");
    printf("X = %s\n", binX);
    printf("Y = %s\n", binY);

    printf("\nWyniki operacji w postaci dziesietnej:\n");
    printf("AND (X & Y) = %hd\n", andResult);
    printf("OR (X | Y) = %hd\n", orResult);
    printf("XOR (X ^ Y) = %hd\n", xorResult);
    printf("NOT X (~X) = %hd\n", notX);
    printf("NOT Y (~Y) = %hd\n", notY);
    printf("NAND (~(X & Y)) = %hd\n", nandResult);
    printf("NOR (~(X | Y)) = %hd\n", norResult);
    printf("XNOR (~(X ^ Y)) = %hd\n", xnorResult);
    printf("SHIFT LEFT X (X << 4) = %hd\n", shiftLeftX);
    printf("SHIFT RIGHT Y (Y >> 3) = %hd\n", shiftRightY);

    printf("\nWyniki operacji w postaci binarnej:\n");
    toBinary(andResult, binResult, 16);
    printf("AND (X & Y) = %s\n", binResult);
    toBinary(orResult, binResult, 16);
    printf("OR (X | Y) = %s\n", binResult);
    toBinary(xorResult, binResult, 16);
    printf("XOR (X ^ Y) = %s\n", binResult);
    toBinary(notX, binResult, 16);
    printf("NOT X (~X) = %s\n", binResult);
    toBinary(notY, binResult, 16);
    printf("NOT Y (~Y) = %s\n", binResult);
    toBinary(nandResult, binResult, 16);
    printf("NAND (~(X & Y)) = %s\n", binResult);
    toBinary(norResult, binResult, 16);
    printf("NOR (~(X | Y)) = %s\n", binResult);
    toBinary(xnorResult, binResult, 16);
    printf("XNOR (~(X ^ Y)) = %s\n", binResult);
    toBinary(shiftLeftX, binResult, 16);
    printf("SHIFT LEFT X (X << 4) = %s\n", binResult);
    toBinary(shiftRightY, binResult, 16);
    printf("SHIFT RIGHT Y (Y >> 3) = %s\n", binResult);

    return 0;
}
}

void zadanie4(){

    int main() {
    int *tablica;
    int rozmiar, nowyRozmiar;

    // Pobranie rozmiaru tablicy
    printf("Podaj rozmiar tablicy (liczba calkowita dodatnia): ");
    scanf("%d", &rozmiar);

    // Alokacja pamięci dla tablicy
    tablica = (int *)malloc(rozmiar * sizeof(int));
    if (tablica == NULL) {
        printf("Blad alokacji pamieci!\n");
        return 1;
    }

    // Wypełnianie tablicy według schematu
    for (int i = 0; i < rozmiar; i++) {
        tablica[i] = 100 - i * 10;
    }

    // Wyświetlenie tablicy
    printf("Tablica poczatkowa:\n");
    for (int i = 0; i < rozmiar; i++) {
        printf("%d ", tablica[i]);
    }
    printf("\n");

    // Pobranie nowego rozmiaru tablicy
    printf("Podaj nowy rozmiar tablicy: ");
    scanf("%d", &nowyRozmiar);

    // Realokacja pamięci dla nowego rozmiaru tablicy
    tablica = (int *)realloc(tablica, nowyRozmiar * sizeof(int));
    if (tablica == NULL) {
        printf("Blad alokacji pamieci podczas realokacji!\n");
        return 1;
    }

    // Wypełnianie dodatkowych komórek, jeśli nowy rozmiar jest większy
    if (nowyRozmiar > rozmiar) {
        for (int i = rozmiar; i < nowyRozmiar; i++) {
            tablica[i] = 15 + i - rozmiar; // Schemat dla nowych wartości
        }
    }

    // Wyświetlenie tablicy po zmianie rozmiaru
    printf("Tablica po zmianie rozmiaru:\n");
    for (int i = 0; i < nowyRozmiar; i++) {
        printf("%d ", tablica[i]);
    }
    printf("\n");

    // Zwolnienie pamięci
    free(tablica);

    return 0;
}
}

void zadanie5(){

    int main() {
    char bufor[200];
    char *dynamicznyBufor;
    size_t rozmiar;

    // Wczytanie zdania z klawiatury do bufora pomocniczego
    printf("Podaj zdanie (maksymalnie 200 znakow): ");
    fgets(bufor, sizeof(bufor), stdin);

    // Usunięcie znaku nowej linii na końcu (jeśli istnieje)
    rozmiar = strlen(bufor);
    if (bufor[rozmiar - 1] == '\n') {
        bufor[rozmiar - 1] = '\0';
        rozmiar--;
    }

    // Alokacja pamięci dla dynamicznego bufora
    dynamicznyBufor = (char *)malloc((rozmiar + 1) * sizeof(char));
    if (dynamicznyBufor == NULL) {
        printf("Blad alokacji pamieci!\n");
        return 1;
    }

    // Skopiowanie tekstu z bufora pomocniczego do bufora dynamicznego
    strcpy(dynamicznyBufor, bufor);

    // Wyświetlenie dynamicznego bufora
    printf("Dynamiczny bufor przed operacjami: %s\n", dynamicznyBufor);

    // Operacja negacji bitowej na każdym znaku (z wyjątkiem znaku '\0')
    for (size_t i = 0; i < rozmiar; i++) {
        dynamicznyBufor[i] = ~dynamicznyBufor[i];
    }

    // Wyświetlenie dynamicznego bufora po operacji negacji bitowej
    printf("Dynamiczny bufor po negacji bitowej: ");
    for (size_t i = 0; i < rozmiar; i++) {
        printf("%c", dynamicznyBufor[i]);
    }
    printf("\n");

    // Operacja przesunięcia bitowego w prawo o 1 na każdym znaku (z wyjątkiem '\0')
    for (size_t i = 0; i < rozmiar; i++) {
        dynamicznyBufor[i] = (unsigned char)dynamicznyBufor[i] >> 1;
    }

    // Wyświetlenie dynamicznego bufora po przesunięciu bitowym
    printf("Dynamiczny bufor po przesunieciu bitowym w prawo o 1: ");
    for (size_t i = 0; i < rozmiar; i++) {
        printf("%c", dynamicznyBufor[i]);
    }
    printf("\n");

    // Zwolnienie pamięci
    free(dynamicznyBufor);

    return 0;
}
}


int main()
{
    zadanie1();
    zadanie2();
    zadanie3();
    zadanie4();
    zadanie5();

    return 0;
}
