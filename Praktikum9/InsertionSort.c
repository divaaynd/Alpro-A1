/*Nama File	: InsertionSort.c*/
/*Deskripsi	: membandingkan dan mengurutkan dua data pertama pada array*/
/*Pembuat	: Diva Ayunda Najwina - 24060121140101*/
/*Tgl pembuatan	: Sabtu, 7 Mei 2022 18.37 WIB*/

#include <stdio.h>
#include "fungsi_arr.c"

void insertionSort(int arr[], int n){
    //Kamus lokal
    int i, j, key;

    //Algoritma
    for (i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main(){
    //Kamus lokal
    int arr[]={7,13,11,9,25,88,97};
    int n;

    //Algoritma
    n = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, n);
    insertionSort(arr, n);
    printArr(arr, n);

    return 0;
}
