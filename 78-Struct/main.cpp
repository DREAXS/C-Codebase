#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    struct ogrenci_bilgi {
        int no;
        char ad[10];
        char soyad[12];
        int yas;
    };

    struct ogrenci_bilgi ogrenci_1, ogrenci_2;

    ogrenci_1.no = 221220000;
    strcpy(ogrenci_1.ad, "C");
    strcpy(ogrenci_1.soyad, "Programlama "); 
    ogrenci_1.yas = 21;

    ogrenci_2 = ogrenci_1;


    printf("Ogrenci 1:\n");
    printf("No: %d\n", ogrenci_1.no);
    printf("Ad: %s\n", ogrenci_1.ad);
    printf("Soyad: %s\n", ogrenci_1.soyad);
    printf("Yas: %d\n", ogrenci_1.yas);

    printf("\nOgrenci 2:\n");
    printf("No: %d\n", ogrenci_2.no);
    printf("Ad: %s\n", ogrenci_2.ad);
    printf("Soyad: %s\n", ogrenci_2.soyad);
    printf("Yas: %d\n", ogrenci_2.yas);

    return 0;
}

