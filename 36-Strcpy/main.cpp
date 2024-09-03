#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[]="C Programlama";
    char b[100];

    strcpy(b,a);

    printf("%s",b);
    return 0;
}
