#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Kullanýcýdan 3 adet sayý alan ve en büyük sayýyý bulan kod

    int a,b,c;

    printf("Lutfen 3 adet sayi giriniz\n");
    scanf("%d %d %d",&a,&b,&c);

    /*if(a>b && a>c)
    {
        printf("%d sayisi en buyuktur",a);
    }
    if(b>a && b>c)
    {
        printf("%d sayisi en buyuktur",b);
    }
    if(c>a && c>b)
    {
        printf("%d sayisi en buyuktur",c);
    }
    if(a == b && a == c)
    {
         printf("Hepsi birbirine esittir");
    }*/

    if(a>b && a>c)
    {
        printf("%d sayisi en buyuktur",a);
    }
    else if(b>a && b>c)
    {
        printf("%d sayisi en buyuktur",b);
    }
    else if(c>a && c>b)
    {
        printf("%d sayisi en buyuktur",c);
    }
    else
    {
         printf("Hepsi birbirine esittir");
    }

    return 0;
}
