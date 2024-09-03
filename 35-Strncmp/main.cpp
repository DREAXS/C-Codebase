#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int sonuc;
    char a[15]="abcdef";
    char b[15]="ABCDEF";
    int c=4;

    sonuc=strncmp(a,b,c);



    if(sonuc<0)
    {
        printf("a b dan daha kucuktur");
    }
    else if(sonuc >0)
    {
        printf("a b dan daha buyuktur");
    }
    else
    {
        printf("Ikiside birbirine esittir");
    }

   return(0);
}
