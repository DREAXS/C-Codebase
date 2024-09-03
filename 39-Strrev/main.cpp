#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char a[100];

    printf("Lutfen bir text giriniz\n");
    scanf("%s",&a);

    printf("Girdiginiz ifade %s\n",a);
    printf("Girdiginiz ifadenin ters cevrilmis hali %s\n",strrev(a));


    return 0;
}
