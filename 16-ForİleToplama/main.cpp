#include <stdio.h>
#include <stdlib.h>

int main()
{

  //Kullan�c�dan al�nan say� ile 1 den itibaren kullan�c�n verdi�i say�ya kadar olan say�lar�n toplam�
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
