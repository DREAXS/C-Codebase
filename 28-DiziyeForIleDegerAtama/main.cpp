#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayilar[3];

    for(int i=0;i<3;i++)
    {
        scanf("%d",&sayilar[i]);
    }

     for(int i=0;i<3;i++)
    {
        printf("%d\n",sayilar[i]);
    }
    return 0;
}
