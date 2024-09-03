#include <stdio.h>
#include <stdlib.h>

void ussunu_al(int a,int b,int *x)
{
    int i;
    *x=1;
    for(i=0;i<b;i++)
    {
        *x=*x*a;
    }

}

int main()
{
    int x=2,y=5,sonuc;
    ussunu_al(x,y,&sonuc);
    printf("%d",sonuc);
    return 0;
}
