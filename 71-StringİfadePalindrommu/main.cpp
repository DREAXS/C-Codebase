#include <stdio.h>
#include <stdlib.h>
#define MAKS 40

void cumleyi_oku(char dizi[MAKS])
{
    int i = 0;
    scanf("%c", &dizi[i]);
    while((dizi[i] != '\n') && i < MAKS - 1)
    {
        i++;
        scanf("%c", &dizi[i]);
    }
    dizi[i] = '\0';
}

int dizi_boyu(char dizi[MAKS])
{
    int uzunluk;
    for (uzunluk = 0; dizi[uzunluk] != '\0'; uzunluk++);
    return uzunluk;
}

void bosluklari_sil(char dizi[MAKS])
{
    int okuma_indeksi;
    int yazma_indeksi = 0;
    for (okuma_indeksi = 0; dizi[okuma_indeksi] != '\0'; okuma_indeksi++)
    {
        if (dizi[okuma_indeksi] != ' ')
        {
            dizi[yazma_indeksi] = dizi[okuma_indeksi];
            yazma_indeksi++;
        }
    }
    dizi[yazma_indeksi] = '\0';
    printf("Bosluklari sildikten sonra dizi : ");
    for (okuma_indeksi = 0; dizi[okuma_indeksi] != '\0'; okuma_indeksi++)
        printf("%c", dizi[okuma_indeksi]);
}

void ters_cevir(char orijinal[MAKS], char ters[MAKS])
{
    int i;
    int son_indeks = dizi_boyu(orijinal) - 1;
    for(i = 0; orijinal[i] != '\0'; i++)
    {
        ters[i] = orijinal[son_indeks];
        son_indeks--;
    }
    ters[i] = '\0';
    printf("\nDizinin ters cevrilmis hali : ");
    for (i = 0; ters[i] != '\0'; i++)
        printf("%c", ters[i]);
}

int palindrom_mu(char dizi[MAKS])
{
    int i;
    int uzunluk;
    int palindrom = 1;
    char ters[MAKS];
    
    bosluklari_sil(dizi);
    uzunluk = dizi_boyu(dizi);
    ters_cevir(dizi, ters);
    
    for (i = 0; i < uzunluk; i++)
    {
        if (ters[i] != dizi[i])
        {
            palindrom = 0;
            break;
        }
    }
    return palindrom;
}

int main(void)
{
    char cumle[MAKS];
    int sonuc;

    printf("Lutfen bir cumle veya kelime girin ? \n");
    cumleyi_oku(cumle);

    sonuc = palindrom_mu(cumle);
    if (sonuc == 1)
        printf("\nBu bir palindromdur.\n");
    else
        printf("\nBu bir palindrom degildir!!!\n");

    return 0;
}

