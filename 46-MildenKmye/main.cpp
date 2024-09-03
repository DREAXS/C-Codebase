#include <stdio.h>
#include <stdlib.h>
#define MIL 1.609

// Mil to km
int main()
{
    float mil_yol,km_yol;
    printf("Mil cinsinden arabanin gittigi yolu giriniz\n");
    scanf("%f",&mil_yol);

    km_yol=MIL*mil_yol;
    printf("Araba %.3f km yol gitmistir.",km_yol);

    return 0;

}
