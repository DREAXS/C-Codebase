#include <stdio.h>
#include <stdlib.h>

int main() {
    // Dosya iþaretçisi tanýmlanýr
    FILE *dosya;

    // Dosyayý açmak için fopen() kullanýlýr
    // Dosyayý kapatmak için fclose() kullanýlýr

    // Dosya açma ve kapama örnekleri

    // Dosya okuma modunda açýlýr
    dosya = fopen("ornek.txt", "r");
    if (dosya == NULL) {
        printf("Dosya açýlamadý!\n");
        return 1;
    }
    // Dosya okuma iþlemleri
    char ch;
    while ((ch = fgetc(dosya)) != EOF) {
        putchar(ch); // Karakteri ekrana yazdýr
    }
    fclose(dosya);

    // Dosya yazma modunda açýlýr (dosya oluþturulur veya üzerine yazýlýr)
    dosya = fopen("ornek.txt", "w");
    if (dosya == NULL) {
        printf("Dosya açýlamadý!\n");
        return 1;
    }
    // Dosyaya yazma iþlemleri
    fprintf(dosya, "Merhaba, Dünya!\n");
    fclose(dosya);

    // Dosya ekleme modunda açýlýr (mevcut dosyanýn sonuna ekleme yapýlýr)
    dosya = fopen("ornek.txt", "a");
    if (dosya == NULL) {
        printf("Dosya açýlamadý!\n");
        return 1;
    }
    // Dosyaya ekleme iþlemleri
    fprintf(dosya, "Yeni bir satýr ekledik.\n");
    fclose(dosya);

    // Dosya okuma ve yazma modunda açýlýr
    dosya = fopen("ornek.txt", "r+");
    if (dosya == NULL) {
        printf("Dosya açýlamadý!\n");
        return 1;
    }
    // Dosyadan okuma ve dosyaya yazma iþlemleri
    char buffer[100];
    fgets(buffer, sizeof(buffer), dosya); // Bir satýr oku
    printf("Dosyadan okunan: %s", buffer);
    fprintf(dosya, "Eklenen satýr.\n");
    fclose(dosya);

    // Dosyanýn sonunun belirlenmesi feof()
    dosya = fopen("ornek.txt", "r");
    if (dosya == NULL) {
        printf("Dosya açýlamadý!\n");
        return 1;
    }
    while (!feof(dosya)) {
        char ch = fgetc(dosya);
        if (!feof(dosya)) { // Dosyanýn sonuna gelinmediði sürece
            putchar(ch);
        }
    }
    fclose(dosya);

    return 0;
}

