#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kullanýcýdan 2 adet sayý ve ismin baþ harfini alan ve bunlarý ekrana bastýran kod

    int ilksayi;
    float ikincisayi;
    char basharf;


    printf("Lutfen isminizin bas harfini giriniz\n");
    scanf("%c",&basharf);

    printf("Lutfen ilk sayiyi giriniz\n");
    scanf("%d",&ilksayi);

    printf("Lutfen ikinci sayiyi giriniz\n");
    scanf("%f",&ikincisayi);


    printf("Ilk sayim:%d Ikinci sayim:%f Isminizin bas harfi %c",ilksayi,ikincisayi,basharf);


    return 0;
}
