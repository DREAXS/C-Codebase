#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayilar[3];
    int i=0;

    do
    {
        scanf("%d",&sayilar[i]);
        i++;
    }while(i<3);

    i=0;
    do
    {
        printf("%d\n",sayilar[i]);
        i++;
    }while(i<3);
    return 0;
}
