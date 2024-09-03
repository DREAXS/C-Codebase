#include <stdio.h>
#include <stdlib.h>

int main()
{

  //Kullanýcýdan alýnan sayý ile 1 den itibaren kullanýcýn verdiði sayýya kadar olan sayýlarýn toplamý
    int sayi;
    int i,toplam=0;



   printf("Lutfen bir sayi giriniz\n");
   scanf("%d",&sayi);

   for(i=1;i<=sayi;i++)
   {
       toplam += i;
   }

   printf("Toplam:%d",toplam);


    return 0;
}
