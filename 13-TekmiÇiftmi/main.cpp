#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kullan�c�dan al�nan say�n�n tek mi �ift mi oldu�unu bulan kod
    int sayi;


    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&sayi);

    if(sayi%2 == 0)
    {
        printf("%d sayisi cift sayidir",sayi);
    }
    else
    {
        printf("%d sayisi tek sayidir",sayi);
    }



    return 0;
}
