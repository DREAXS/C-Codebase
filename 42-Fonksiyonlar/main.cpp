#include <stdio.h>
#include <stdlib.h>


float dortislem(float a,float b, char islem)
{
    if(islem == '+')
    {
         return a+b;

    }
    else if(islem == '-')
    {
        return a-b;
    }
    else if(islem == '*')
    {
        return a*b;
    }
    else if(islem == '/')
    {
        return a/b;
    }
    else
    {
        printf("Yanlis oparator girdiniz");
    }


}

int main()
{
   //Klavyeden girilen 2 say� ile 4 i�lem yapan fnksiyon kodu

   float sayi1,sayi2;
   char islem;
   printf("Hangi islemi yaptirmak istiyorsunuz (+ - / *)\n");
   scanf("%c",&islem);
   printf("Lutfen 2 adet sayi giriniz\n");
   scanf("%f%f",&sayi1,&sayi2);
    if(islem == '+')
    {
        printf("Islemin sonucu %.2f",sayi1+sayi2);
    }
    else if(islem == '-')
    {
        printf("Islemin sonucu %.2f",sayi1-sayi2);
    }
    else if(islem == '*')
    {
        printf("Islemin sonucu %.2f",sayi1*sayi2);
    }
    else if(islem == '/')
    {
        printf("Islemin sonucu %.2f",sayi1/sayi2);
    }
    else
    {
        printf("Yanlis oparator girdiniz");
    }

    return 0;
}
