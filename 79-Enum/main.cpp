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
        printf("Þubat");
        break;
    case mart:
        printf("Mart");
        break;
    case nisan:
        printf("Nisan");
        break;
    case mayis:
        printf("Mayýs");
        break;
    case haziran:
        printf("Haziran");
        break;
    case temmuz:
        printf("Temmuz");
        break;
    case agustos:
        printf("Aðustos");
        break;
    case eylul:
        printf("Eylül");
        break;
    case ekim:
        printf("Ekim");
        break;
    case kasim:
        printf("Kasým");
        break;
    case aralik:
        printf("Aralýk");
        break;
    default:
        printf("Böyle bir ay yok");
        break;
    }
}

int main()
{
    aylar x = ocak;
    ayi_goster(x);
    return 0;
}

