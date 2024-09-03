#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[5] = {22, 21, 20, 9, 18};
    int i;

    x[2]=18;
    x[3]=1;

    for(i=0;i<5;i++)
    {
        printf("%d ",x[i]);
    }
    return 0;
}
