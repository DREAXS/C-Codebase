#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int *p, i, N;

    printf("Kac adet sayi uretilecek?\n");
    scanf("%d", &N);

    p = (int *)malloc(N * sizeof(int));
    
    if (p == NULL) {
        printf("Bellek ayirma islemi basarisiz.\n");
        return 1; 
    }

    srand(time(NULL)); 

    printf("Uretilen sayilar:\n");
    for (i = 0; i < N; i++) {
        *(p + i) = rand() % 100; 
        printf("%d  ", *(p + i));
    }
    printf("\n");

    printf("Kareleri:\n");
    for (i = 0; i < N; i++) {
        printf("%d  ", (*(p + i)) * (*(p + i)));
    }
    printf("\n");

    free(p);

    return 0;
}

