#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kullan�c�dan 2 adet say� ve ismin ba� harfini alan ve bunlar� ekrana bast�ran kod

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
