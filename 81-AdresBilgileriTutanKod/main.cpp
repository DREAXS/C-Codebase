#include <stdio.h>
#include <stdlib.h>

struct AdresDefteri{
char Ad[100];
char Soyad[100];
char TelNo[10];
char Adres[200];
char PostaKodu[10];

};

int main()
{
    int N;
    int i;
    char satir;
    printf("Kac adet kayit tutulacak ? \n");
    scanf("%d",&N);
    scanf("%c",&satir);

    struct AdresDefteri iletisim[N];

    for(i=0;i<N;i++)
    {

        printf("Adi giriniz ? \n");
        gets(iletisim[i].Ad);

        printf("Soyadi giriniz ? \n");
        gets(iletisim[i].Soyad);

        printf("Telno giriniz ? \n");
        gets(iletisim[i].TelNo);

        printf("Adres giriniz ? \n");
        gets(iletisim[i].Adres);

        printf("Postakodu giriniz ? \n");
        gets(iletisim[i].PostaKodu);


    }

    printf("ADI\tSOYADI\tTELEFON    \t   ADRES\t            \POSTAKODU\n");
    printf("===========================================================\n");

    for(i=0;i<N;i++)
    {
        printf("%s \t %s \t %s \t %s \t %s\n",iletisim[i].Ad,iletisim[i].Soyad,iletisim[i].TelNo,iletisim[i].PostaKodu,iletisim[i].Adres);
    }

    return 0;
}
