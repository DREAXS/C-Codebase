#include <stdio.h>
#include <stdlib.h>

int main()
{
	//While to dowhile
    int sayim;

    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&sayim);

    int i = 1;

     do{

        printf("%d\n",i*sayim);
        i++;
    }while (1);

    return 0;
}
