#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n = 5;
    int i;

    ptr = (int*)calloc(n, sizeof(int));
    if (ptr == NULL)
    {
        printf("Hafiza tahsis edilemedi\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        ptr[i] = i + 1;
    }

    printf("Elemanlar : \n");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", ptr[i]);
    }
    printf("\n");
    free(ptr);

    return 0;
}

