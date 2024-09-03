#include <stdio.h>
#include <string.h>

union veri {
    int sayi;
    float ondalikli;
    char metin[20];
};

int main() {
    union veri v;

    v.sayi = 42;
    printf("Sayi: %d\n", v.sayi);

    v.ondalikli = 3.14;
    printf("Ondalikli: %.2f\n", v.ondalikli);

    strcpy(v.metin, "Merhaba");
    printf("Metin: %s\n", v.metin);
    printf("Son durum:\n");
    printf("Sayi: %d\n", v.sayi);
    printf("Ondalikli: %.2f\n", v.ondalikli);
    printf("Metin: %s\n", v.metin);

    return 0;
}

