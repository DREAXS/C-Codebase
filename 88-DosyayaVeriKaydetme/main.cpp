#include <stdio.h>
#include <stdlib.h>

int main() {
    // Dosya iþlemleri örnekleri:

    // 1. Basit bir dosya oluþturma ve kapama
    // FILE *dosya;
    // dosya = fopen("a.txt", "w");
    // fclose(dosya);

    // 2. Dosyaya biçimlendirilmiþ veri yazma
    // Bu örnekte bir karakter dizisi dosyaya yazýlýr
    /*
    FILE *dosya;
    char isim[] = "C";
    dosya = fopen("b.txt", "w");
    if (dosya == NULL) {
        printf("Dosya açýlamadý!\n");
        return 1;
    }
    fprintf(dosya, "Bu dosya %s'in dosyasidir", isim);
    fclose(dosya);
    */

    // 3. Çarpan tablosu oluþturma ve dosyaya yazma
    // Bu örnekte 1'den 10'a kadar olan çarpan tablosu dosyaya yazýlýr
    /*
    FILE *dosya;
    dosya = fopen("carpimTablosu.txt", "w");
    if (dosya == NULL) {
        printf("Dosya açýlamadý!\n");
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

    // 4. Kullanýcý bilgilerini dosyaya ekleme
    // Bu örnekte kullanýcýdan bilgi alýnýp dosyaya eklenir
    /*
    FILE *dosya;
    dosya = fopen("ogrenci.txt", "a");
    if (dosya == NULL) {
        printf("Dosya açýlamadý!\n");
        return 1;
    }
    char isim[20], okul[50], bolum[50];

    printf("Adiniz: ");
    fgets(isim, sizeof(isim), stdin);  // gets() yerine fgets() kullanmak daha güvenlidir
    printf("Okulunuz: ");
    fgets(okul, sizeof(okul), stdin);
    printf("Bolumunuz: ");
    fgets(bolum, sizeof(bolum), stdin);

    // fgets() kullanýldýðýnda satýr sonu karakterini kaldýrmak gerekebilir
    isim[strcspn(isim, "\n")] = '\0';
    okul[strcspn(okul, "\n")] = '\0';
    bolum[strcspn(bolum, "\n")] = '\0';

    fprintf(dosya, "%s\n%s\n%s\n", isim, okul, bolum);
    fclose(dosya);
    */

    // 5. Dosyaya karakter dizisi ekleme
    // Bu örnekte dosyaya yeni bir metin eklenir
    FILE *dosya;
    dosya = fopen("merhaba.txt", "a");
    if (dosya == NULL) {
        printf("Dosya açýlamadý!\n");
        return 1;
    }
    fputs("\nText", dosya);
    fclose(dosya);

    return 0;
}

