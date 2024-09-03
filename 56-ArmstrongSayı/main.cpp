#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
  int sayi,kalan,sonuc=0,originalNumber;
  printf("Lutfen 3 bassamakli bir sayi giriniz\n");
  scanf("%d",&sayi);
  originalNumber = sayi;

  while(sayi != 0){
    kalan = sayi % 10;
    sonuc = sonuc + kalan*kalan*kalan;
    sayi = sayi /10;
  }

  if(originalNumber == sonuc){
    printf("%d Armstrong sayidir",originalNumber);
  }
  else{
    printf("%d Armstrong sayi degildir",originalNumber);
  }

    return 0;

}
