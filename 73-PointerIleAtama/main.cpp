#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ad1,*ad2,*ad;
    int n=1,p=2;

    ad1=&n;
    ad2=&p;

    printf("Atamadan once ad1 degeri : %d\n",*ad1);

    printf("%d\n",ad1);

    *ad1=*ad2+1;

    printf("Atamami yaptiktan sonra ad1 degeri : %d\n",*ad1);
    printf("%d\n",ad1);

    return 0;
}
