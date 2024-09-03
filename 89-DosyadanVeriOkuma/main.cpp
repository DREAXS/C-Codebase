#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 1. Dosyadan Tek Bir Karakter Okuma
    /*
    FILE *dosya;
    char karakter;
    dosya = fopen("deneme.txt", "r");
    if (dosya != NULL)
    {
        karakter = fgetc(dosya);
        printf("Okunan karakter: %c\n", karakter);
        fclose(dosya);
    }
    else
    {
        printf("Dosya bulunamadi\n");
    }
    */

    // 2. Dosyadan Biçimlendirilmiþ Veri Okuma
    /*
    FILE *dosya;
    char k1[10], k2[10];
    int sayi;
    dosya = fopen("a.txt", "r");
    if (dosya != NULL)
    {
        fscanf(dosya, "%s", k1);
        fscanf(dosya, "%s", k2);
        fscanf(dosya, "%d", &sayi);
        printf("Okunan veriler: %s %s %d\n", k1, k2, sayi);
        fclose(dosya);
    }
    else
    {
        printf("Dosya bulunamadi\n");
    }
    */

    // 3. Dosyadan Birden Fazla Satýr Okuma
    /*
    FILE *dosya;
    char kelime[50][20];
    int i = 0;
    dosya = fopen("dizi.txt", "r");
    if (dosya != NULL)
    {
        while (fscanf(dosya, "%s", kelime[i]) != EOF)
        {
            printf("%s ", kelime[i]);
            i++;
        }
        fclose(dosya);
    }
    else
    {
        printf("Dosya bulunamadi\n");
    }
    */

    // 4. Dosyadan Birden Fazla Veri Okuma
    /*
    FILE *dosya;
    char numaralar[10][10], isimler[10][20];
    int notlar[10];
    int i = 0;
    dosya = fopen("ogrenci.txt", "r");
    if (dosya != NULL)
    {
        while (fscanf(dosya, "%s %s %d", numaralar[i], isimler[i], &notlar[i]) != EOF)
        {
            printf("%s %s %d\n", numaralar[i], isimler[i], notlar[i]);
            i++;
        }
        fclose(dosya);
    }
    else
    {
        printf("Dosya bulunamadi\n");
    }
    */

    // 5. Dosyadan Karakter Okuma ve Ekrana Yazma
    FILE *dosya;
    char karakter;
    dosya = fopen("x.txt", "r");
    if (dosya != NULL)
    {
        karakter = fgetc(dosya);
        while (karakter != EOF)
        {
            printf("%c", karakter);
            karakter = fgetc(dosya);
        }
        fclose(dosya);
    }
    else
    {
        printf("Dosya bulunamadi\n");
    }

    return 0;
}

