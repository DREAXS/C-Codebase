#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kullan�c�dan 2 adet 3 e 2 lik matris de�erlerini alarak bunlar� 3 boyutlu say� dizisine aktaran kod

    int a[2][3][2];
    int i,j,k;

    printf("Lutfen 12 adet deger giriniz\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
                scanf("%d",&a[i][j][k]);
            }
        }
    }

    printf("Girdiginiz Degerler \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
               printf("a[%d][%d][%d] = %d\n",i,j,k,a[i][j][k]);
            }
        }
    }

    return 0;
}
