#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Kullanýcýdan alýnan 2 adet alýnan sayýnýn birbirine göre durumu

   int sayi1,sayi2;

   printf("Lutfen 2 adet sayi giriniz\n");
   scanf("%d%d",&sayi1,&sayi2);

   if(sayi1 == sayi2)
   {
       printf("Sonuc : %d = %d",sayi1,sayi2);
   }
   else if(sayi1 > sayi2)
   {
        printf("Sonuc : %d > %d",sayi1,sayi2);
   }
   else
   {
      printf("Sonuc : %d < %d",sayi1,sayi2);
   }


    return 0;
}
