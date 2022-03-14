/*Nama File	: CekHari.c*/
/*Deskripsi	: Membuat Program CekHari*/
/*Pembuat	: Diva Ayunda Najwina - 24060121140101*/
/*Tgl pembuatan	: Sabtu, 12-03-2022 21:23 WIB]*/

#include <stdio.h>

int main (){
	//Kamus
	int h;

	//Algoritma
	printf("Membuat Program Cek Hari \n");
	printf("Masukan nomor hari : ");
	scanf("%d", &h);

	switch(h){
		case 1 :
			printf("Senin");
			break;
		case 2 :
			printf("Selasa");
			break;
		case 3 :
			printf("Rabu");
			break;
		case 4 :
			printf("Kamis");
			break;
		case 5 :
			printf("Jumat");
			break;
		case 6 :
			printf("Sabtu");
			break;
		case 7 :
			printf("Minggu");
			break;
		default :
			printf("Masukan nomor hari tidak tepat");
	}
	return 0;
}
