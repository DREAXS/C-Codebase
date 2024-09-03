#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n = 5;
    int i;
    printf("Ilk sayi degeri %d\n", n);

    // Bellek tahsisi
    ptr = (int*)calloc(n, sizeof(int));
    if (ptr == NULL)
    {
        printf("Hafiza tahsis edilemedi\n");
        exit(0);
    }
    else
    {
        // �lk diziyi doldurma
        for (i = 0; i < n; i++)
        {
            ptr[i] = i + 1;
        }

        // �lk diziyi yazd�rma
        printf("Ilk dizinin elemanlari : \n");
        for (i = 0; i < n; i++)
        {
            printf(" %d ", ptr[i]);
        }
        printf("\n");

        // Bellek yeniden tahsis etme
        int new_size = 10; // Yeni boyut
        ptr = (int*)realloc(ptr, new_size * sizeof(int));
        if (ptr == NULL)
        {
            printf("Bellek yeniden tahsis edilemedi\n");
            exit(0);
        }
        else
        {
            // Yeni elemanlar� doldurma
            for (i = 5; i < new_size; i++)
            {
                ptr[i] = i + 1;
            }

            // G�ncellenmi� diziyi yazd�rma
            printf("Guncellenmis dizinin elemanlari : \n");
            for (i = 0; i < new_size; i++)
            {
                printf(" %d ", ptr[i]);
            }
            printf("\n");
        }

        // Belle�i serbest b�rakma
        free(ptr);
    }

    return 0;
}

