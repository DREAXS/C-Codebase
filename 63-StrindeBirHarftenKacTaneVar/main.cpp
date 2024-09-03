#include <stdio.h>
#include <string.h>

int main()
{

    char message[100]="C Programlama";
    char karakter;
    int i,sayac=0;

    printf("Istediginiz karakteri giriniz\n");
    scanf("%c",&karakter);

    for(i=0;message[i] != '\0';i++){
        if(message[i] == karakter){
            sayac++;
        }
    }
    printf("Girimis oldugunuz %c karakteri %d defa kullanilmisir",karakter,sayac);

    return 0;
}
