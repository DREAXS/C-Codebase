#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi1[100], dizi2[100];
    int *ptr1, *ptr2;
    int eleman_sayisi1, eleman_sayisi2;
    int i;

    printf("Birinci dizimizin eleman sayisi (maks 100) : \n");
    scanf("%d", &eleman_sayisi1);
    if (eleman_sayisi1 > 100) eleman_sayisi1 = 100; 
    for (ptr1 = dizi1; ptr1 < dizi1 + eleman_sayisi1; ptr1++)
    {
        printf("Eleman %d : ", ptr1 - dizi1);
        scanf("%d", ptr1);
    }

    printf("Ikinci dizimizin eleman sayisi : \n");
    scanf("%d", &eleman_sayisi2);
    if (eleman_sayisi2 > 100) eleman_sayisi2 = 100; 
    for (ptr2 = dizi2; ptr2 < dizi2 + eleman_sayisi2; ptr2++)
    {
        printf("Eleman %d : ", ptr2 - dizi2);
        scanf("%d", ptr2);
    }

    printf("Birinci dizimiz : \n");
    for (i = 0; i < eleman_sayisi1; i++)
    {
        printf("%4d", *(dizi1 + i));
    }

    printf("\nIkinci dizimiz : \n");
    for (i = 0; i < eleman_sayisi2; i++)
    {
        printf("  %4d", *(dizi2 + i));
    }

    for (ptr1 = dizi1 + eleman_sayisi1, ptr2 = dizi2; ptr2 < dizi2 + eleman_sayisi2; ptr1++, ptr2++)
    {
        *ptr1 = *ptr2;
    }

    printf("\nBirlestirmeden sonra ==> \n");
    for (i = 0; i < eleman_sayisi1 + eleman_sayisi2; i++)
    {
        printf("  %4d", *(dizi1 + i));
    }

    return 0;
}

