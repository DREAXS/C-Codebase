#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Kullan�c�dan al�nan 2 adet al�nan say�n�n birbirine g�re durumu

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
