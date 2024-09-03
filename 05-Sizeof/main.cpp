#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 20;
    float sayi = 4.64;
    double doublesayi = 4.56;
    char karakteri = 'h';

    printf("X degiskeni hafizada %d byte kadar yer tutar\n",sizeof(x));
    printf("Char hafizada %d byte kadar yer tutar\n",sizeof(karakteri));
    printf("Float hafizada %d byte kadar yer tutar\n",sizeof(sayi));
    printf("Double hafizada %d byte kadar yer tutar\n",sizeof(doublesayi));



    return 0;
}
