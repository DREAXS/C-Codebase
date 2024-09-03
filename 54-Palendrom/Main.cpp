#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,tersi=0,orgsayi,kalan;
    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&sayi);
    orgsayi = sayi;

    while (sayi != 0) {
		kalan = sayi % 10;
		tersi = tersi * 10 + kalan;
		sayi /= 10;
	};
	printf("Sayimizin tersi:%d\n",tersi);

	if(orgsayi == tersi){
        printf("Sayimiz palendromdur");
	}
	else{
        printf("Sayimiz palendrom sayi degildir");
	}

    return 0;

}
