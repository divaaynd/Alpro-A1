/*Nama File	: CekPrima.c*/
/*Deskripsi	: Membuat Program CekPrima*/
/*Pembuat	: Diva Ayunda Najwina - 24060121140101*/
/*Tgl pembuatan	: Senin, 21-03-2022 19:23 WIB]*/

#include <stdio.h>
int main()
{
    //Kamus
    int N,i,counter;
    
	//Algoritma
    counter = 0;
    printf("Masukkan bilangan : ");
    scanf("%d", &N);
    if (N<=0) {
        printf("%d bukan bilangan Prima");
    }
    else {
        for (i=2; i<=N; i++) {
            if (N%i == 0) {
                counter++;
            }
        }
    if (counter == 1) {
        printf("%d merupakan bilangan prima \n", N);
    }
    else {
        printf("%d bukan bilangan prima \n", N);
    }
    }
    return 0;
}
