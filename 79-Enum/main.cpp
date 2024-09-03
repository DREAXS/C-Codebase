#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    ocak = 1,
    subat,
    mart,
    nisan,
    mayis,
    haziran,
    temmuz,
    agustos,
    eylul,
    ekim,
    kasim,
    aralik
} aylar;

void ayi_goster(aylar y)
{
    switch(y)
    {
    case ocak:
        printf("Ocak");
        break;
    case subat:
        printf("�ubat");
        break;
    case mart:
        printf("Mart");
        break;
    case nisan:
        printf("Nisan");
        break;
    case mayis:
        printf("May�s");
        break;
    case haziran:
        printf("Haziran");
        break;
    case temmuz:
        printf("Temmuz");
        break;
    case agustos:
        printf("A�ustos");
        break;
    case eylul:
        printf("Eyl�l");
        break;
    case ekim:
        printf("Ekim");
        break;
    case kasim:
        printf("Kas�m");
        break;
    case aralik:
        printf("Aral�k");
        break;
    default:
        printf("B�yle bir ay yok");
        break;
    }
}

int main()
{
    aylar x = ocak;
    ayi_goster(x);
    return 0;
}

