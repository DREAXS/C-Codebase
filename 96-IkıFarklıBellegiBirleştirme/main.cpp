#include <stdio.h>
#include <stdlib.h>
#include <time.h>  // time() fonksiyonu için gerekli

int main()
{
    int N, M;
    int *dizi1, *dizi2, *sonuc;
    int sayac = 0;
    int i;

    printf("Birinci dizi icin kac tane sayi uretilecek?\n");
    scanf("%d", &N);
    printf("Ikinci dizi icin kac tane sayi uretilecek?\n");
    scanf("%d", &M);

    dizi1 = (int *)calloc(N, sizeof(int));
    dizi2 = (int *)calloc(M, sizeof(int));

    if (dizi1 == NULL || dizi2 == NULL) {
        printf("Bellekten ayirma islemi basarisiz!!!\n");
        free(dizi1);
        free(dizi2);
        exit(1);
    }

    srand(time(NULL)); 

    printf("Birinci dizi elemanlari:\n");
    for (i = 0; i < N; i++) {
        *(dizi1 + i) = rand() % 50;
        printf("%d  ", *(dizi1 + i));
    }
    printf("\n");

    printf("Ýkinci dizi elemanlari:\n");
    for (i = 0; i < M; i++) {
        *(dizi2 + i) = rand() % 100;
        printf("%d  ", *(dizi2 + i));
    }
    printf("\n");

    sonuc = (int *)calloc(N + M, sizeof(int));

    if (sonuc == NULL) {
        printf("Bellekten ayýrma islemi basarisiz.\n");
        free(dizi1);
        free(dizi2);
        exit(1);
    }

    printf("Birlestirilmis Dizi:\n");
    for (i = 0; i < N; i++) {
        *(sonuc + sayac) = *(dizi1 + i);
        sayac++;
    }
    for (i = 0; i < M; i++) {
        *(sonuc + sayac) = *(dizi2 + i);
        sayac++;
    }
    for (i = 0; i < sayac; i++) {
        printf("%d  ", *(sonuc + i));
    }
    printf("\n");

    free(dizi1);
    free(dizi2);
    free(sonuc);

    return 0;
}

