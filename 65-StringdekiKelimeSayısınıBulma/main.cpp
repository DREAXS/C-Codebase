#include <stdio.h>
#include <string.h>

int main()
{
   char cumle[100];
   int i=0,sayac=0;

   printf("Lutfen bir cumle giriniz\n");
   fgets(cumle,100,stdin);

    while(cumle[i]!='\0'){
            if(cumle[i] == ' '){
                sayac++;
            }
            i++;
    }

    printf("Girilen cumledeki kelime sayisi %d",sayac+1);

    return 0;
}
