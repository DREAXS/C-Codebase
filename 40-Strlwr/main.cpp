#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char a[100];

    printf("Lutfen bir text giriniz\n");
    fgets(a,sizeof(a),stdin);

    printf("Girdiginiz ifade %s\n",a);
    printf("Girdiginiz ifadenin kucuk harflere donusturulmus hali %s\n",strlwr(a));


    return 0;
}
