#include <stdio.h>
#include <stdlib.h>

void yer_degistir_normal(int sayi1, int sayi2)
{
    int gecici;
    gecici = sayi1;
    sayi1 = sayi2;
    sayi2 = gecici;

}

void yer_degistir(int *sayi1, int *sayi2)
{
    int gecici;
    gecici = *sayi1;
    *sayi1 = *sayi2;
    *sayi2 = gecici;

}

int main()
{
    int sayi1, sayi2;

    printf("Lutfen 2 adet sayi giriniz:\n");
    scanf("%d%d", &sayi1, &sayi2);

    printf("Sayilar yer degistirmeden önce:\n");
    printf("Ilk sayý = %d\n", sayi1);
    printf("Ikinci sayi = %d\n", sayi2);

    yer_degistir_normal(sayi1, sayi2);
    printf("Yer degistirdikten sonra (normal yöntem):\n");
    printf("Ilk sayi = %d\n", sayi1);
    printf("Ikinci sayi = %d\n", sayi2);

    yer_degistir(&sayi1, &sayi2);
    printf("Yer degistirdikten sonra (pointer yontemi):\n");
    printf("Ilk sayi = %d\n", sayi1);
    printf("Ikinci sayi = %d\n", sayi2);

    return 0;
}

