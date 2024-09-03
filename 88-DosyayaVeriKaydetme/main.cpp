#include <stdio.h>
#include <stdlib.h>

int main() {
    // Dosya i�lemleri �rnekleri:

    // 1. Basit bir dosya olu�turma ve kapama
    // FILE *dosya;
    // dosya = fopen("a.txt", "w");
    // fclose(dosya);

    // 2. Dosyaya bi�imlendirilmi� veri yazma
    // Bu �rnekte bir karakter dizisi dosyaya yaz�l�r
    /*
    FILE *dosya;
    char isim[] = "C";
    dosya = fopen("b.txt", "w");
    if (dosya == NULL) {
        printf("Dosya a��lamad�!\n");
        return 1;
    }
    fprintf(dosya, "Bu dosya %s'in dosyasidir", isim);
    fclose(dosya);
    */

    // 3. �arpan tablosu olu�turma ve dosyaya yazma
    // Bu �rnekte 1'den 10'a kadar olan �arpan tablosu dosyaya yaz�l�r
    /*
    FILE *dosya;
    dosya = fopen("carpimTablosu.txt", "w");
    if (dosya == NULL) {
        printf("Dosya a��lamad�!\n");
        return 1;
    }

    int i, j;
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++) {
            fprintf(dosya, "%d * %d = %d\n", i, j, i * j);
        }
        fprintf(dosya, "\n");
    }
    fclose(dosya);
    */

    // 4. Kullan�c� bilgilerini dosyaya ekleme
    // Bu �rnekte kullan�c�dan bilgi al�n�p dosyaya eklenir
    /*
    FILE *dosya;
    dosya = fopen("ogrenci.txt", "a");
    if (dosya == NULL) {
        printf("Dosya a��lamad�!\n");
        return 1;
    }
    char isim[20], okul[50], bolum[50];

    printf("Adiniz: ");
    fgets(isim, sizeof(isim), stdin);  // gets() yerine fgets() kullanmak daha g�venlidir
    printf("Okulunuz: ");
    fgets(okul, sizeof(okul), stdin);
    printf("Bolumunuz: ");
    fgets(bolum, sizeof(bolum), stdin);

    // fgets() kullan�ld���nda sat�r sonu karakterini kald�rmak gerekebilir
    isim[strcspn(isim, "\n")] = '\0';
    okul[strcspn(okul, "\n")] = '\0';
    bolum[strcspn(bolum, "\n")] = '\0';

    fprintf(dosya, "%s\n%s\n%s\n", isim, okul, bolum);
    fclose(dosya);
    */

    // 5. Dosyaya karakter dizisi ekleme
    // Bu �rnekte dosyaya yeni bir metin eklenir
    FILE *dosya;
    dosya = fopen("merhaba.txt", "a");
    if (dosya == NULL) {
        printf("Dosya a��lamad�!\n");
        return 1;
    }
    fputs("\nText", dosya);
    fclose(dosya);

    return 0;
}

