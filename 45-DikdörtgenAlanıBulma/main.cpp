#include <stdio.h>
#include <stdlib.h>

//Dikdörtgen alaný bulan kod

int main()
{
   int kisakenar,uzunkenar,alan,cevre;

   printf("Lutfen kisa kenar degerini giriniz\n");
   scanf("%d",&kisakenar);

   printf("Lutfen uzun kenar degerini giriniz\n");
   scanf("%d",&uzunkenar);

    alan=kisakenar*uzunkenar;
    cevre=2*(kisakenar+uzunkenar);

    printf("Dikdortgenimizin alani = %d\n",alan);
    printf("Dikdortgenimizin cevresi = %d ",cevre);

    return 0;

}
