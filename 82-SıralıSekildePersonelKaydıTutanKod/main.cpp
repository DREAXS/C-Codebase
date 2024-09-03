#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char ad[20];
    char soyad[20];
    int yas;
    float maas;
    char cinsiyet[10];
} Personel;

void sirala(Personel personelList[], int sayi) {
    int i, j;
    Personel temp;
    for (i = 0; i < sayi - 1; i++) {
        for (j = i + 1; j < sayi; j++) {
            if (strcmp(personelList[i].ad, personelList[j].ad) > 0) {
                temp = personelList[i];
                personelList[i] = personelList[j];
                personelList[j] = temp;
            }
        }
    }
}


void listele(Personel personelList[], int sayi) {
    int i;
    printf("Personel Listesi:\n");
    for (i = 0; i < sayi; i++) {
        printf("ID: %d, Ad: %s, Soyad: %s, Yas: %d, Maas: %.2f, Cinsiyet: %s\n",
               personelList[i].id, personelList[i].ad, personelList[i].soyad,
               personelList[i].yas, personelList[i].maas, personelList[i].cinsiyet);
    }
}

int main() {
    int personelSayisi;
    int i;

    printf("Kac adet personel bilgisi tutulacak? ");
    scanf("%d", &personelSayisi);

    Personel personelList[personelSayisi];

    for (i = 0; i < personelSayisi; i++) {
        printf("Personel %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &personelList[i].id);

        printf("Ad: ");
        scanf("%s", personelList[i].ad);

        printf("Soyad: ");
        scanf("%s", personelList[i].soyad);

        printf("Yas: ");
        scanf("%d", &personelList[i].yas);

        printf("Maas: ");
        scanf("%f", &personelList[i].maas);

        printf("Cinsiyet: ");
        scanf("%s", personelList[i].cinsiyet);

        printf("\n");
    }

    sirala(personelList, personelSayisi);
    listele(personelList, personelSayisi);

    return 0;
}

