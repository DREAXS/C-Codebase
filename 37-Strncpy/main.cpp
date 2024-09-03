#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[]="C Programlama";
    char b[100]="";

    strncpy(b,a,10);

    printf("%s",b);
    return 0;
}
