#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kelimeler[5][50];
    char *baslangic, *son;
    int i;
    char gecici;

    printf("Lütfen 5 adet kelime giriniz: \n");

    for (i = 0; i < 5; i++)
    {
        printf("%d. kelime: ", i + 1);
        scanf("%s", kelimeler[i]);
    }

    for (i = 0; i < 5; i++)
    {
        baslangic = kelimeler[i];
        son = kelimeler[i];


        while (*son)
        {
            son++;
        }
        son--;

        while (baslangic < son)
        {
            gecici = *baslangic;
            *baslangic = *son;
            *son = gecici;
            baslangic++;
            son--;
        }
    }

    printf("Ters cevrilmis kelimeler :\n");
    for (i = 0; i < 5; i++)
    {
        printf(" %s\n", kelimeler[i]);
    }

    return 0;
}

