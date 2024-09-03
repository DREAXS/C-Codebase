#include <stdio.h>
#include <stdlib.h>

int main() {
    // Dosya i�aret�isi tan�mlan�r
    FILE *dosya;

    // Dosyay� a�mak i�in fopen() kullan�l�r
    // Dosyay� kapatmak i�in fclose() kullan�l�r

    // Dosya a�ma ve kapama �rnekleri

    // Dosya okuma modunda a��l�r
    dosya = fopen("ornek.txt", "r");
    if (dosya == NULL) {
        printf("Dosya a��lamad�!\n");
        return 1;
    }
    // Dosya okuma i�lemleri
    char ch;
    while ((ch = fgetc(dosya)) != EOF) {
        putchar(ch); // Karakteri ekrana yazd�r
    }
    fclose(dosya);

    // Dosya yazma modunda a��l�r (dosya olu�turulur veya �zerine yaz�l�r)
    dosya = fopen("ornek.txt", "w");
    if (dosya == NULL) {
        printf("Dosya a��lamad�!\n");
        return 1;
    }
    // Dosyaya yazma i�lemleri
    fprintf(dosya, "Merhaba, D�nya!\n");
    fclose(dosya);

    // Dosya ekleme modunda a��l�r (mevcut dosyan�n sonuna ekleme yap�l�r)
    dosya = fopen("ornek.txt", "a");
    if (dosya == NULL) {
        printf("Dosya a��lamad�!\n");
        return 1;
    }
    // Dosyaya ekleme i�lemleri
    fprintf(dosya, "Yeni bir sat�r ekledik.\n");
    fclose(dosya);

    // Dosya okuma ve yazma modunda a��l�r
    dosya = fopen("ornek.txt", "r+");
    if (dosya == NULL) {
        printf("Dosya a��lamad�!\n");
        return 1;
    }
    // Dosyadan okuma ve dosyaya yazma i�lemleri
    char buffer[100];
    fgets(buffer, sizeof(buffer), dosya); // Bir sat�r oku
    printf("Dosyadan okunan: %s", buffer);
    fprintf(dosya, "Eklenen sat�r.\n");
    fclose(dosya);

    // Dosyan�n sonunun belirlenmesi feof()
    dosya = fopen("ornek.txt", "r");
    if (dosya == NULL) {
        printf("Dosya a��lamad�!\n");
        return 1;
    }
    while (!feof(dosya)) {
        char ch = fgetc(dosya);
        if (!feof(dosya)) { // Dosyan�n sonuna gelinmedi�i s�rece
            putchar(ch);
        }
    }
    fclose(dosya);

    return 0;
}

