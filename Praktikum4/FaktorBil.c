/*Nama File	: FaktorBil.c*/
/*Deskripsi	: Membuat Program FaktorBil*/
/*Pembuat	: Diva Ayunda Najwina - 24060121140101*/
/*Tgl pembuatan	: Senin, 21-03-2022 14:44 WIB]*/

#include<stdio.h>

int main()
{
    //Kamus
    int N,i;

    //Algoritma
    printf("Masukkan bilangan : ");
    scanf("%d", &N);
    if (N<=0) {
        printf("N harus positif");
    }
    else {
        printf("Faktor dari bilangan %d : \n", N);
        for(i=1; i<=N; i++) {
            if (N%i == 0) {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}
