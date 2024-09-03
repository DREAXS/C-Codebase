#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

//Daire alaný ve çevresi
int main()
{
    float yaricap,alan,cevre;
    printf("Lutfen yaricap degerini giriniz\n");
    scanf("%f",&yaricap);
    alan=PI*yaricap*yaricap;
    cevre=2*PI*yaricap;
    printf("Dairenin alani %.3f\n",alan);
    printf("Dairenin cevresi %.3f",cevre);

    return 0;

}
