/*Nama File	: SelectionSort.c*/
/*Deskripsi	: Membuat algoritma pengurutan dengan cara mencari nilai terendah / tertinggi di dalam array*/
/*Pembuat	: Diva Ayunda Najwina - 24060121140101*/
/*Tgl pembuatan	: Sabtu, 7 Mei 2022 16.47 WIB*/

#include <stdio.h>
#include "fungsi_arr.c"

void selectionSort(int arr[], int n){
    //Kamus lokal
    int i, j, min;

    //Algoritma
    for (i = 0; i < n-1; i++){
        for (j = i+1; j < n; j++){
            min = i;
            if (arr[j] < arr[min]){
                min = j;
            }
            swap(&arr[i], &arr[min]);
        }
    }
}

int main(){
    //Kamus
    int arr[]={10,5,3,4,23,21,2,9,57,1};
    int n;

    //Algoritma
    n = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, n);
    selectionSort(arr, n);
    printArr(arr, n);

    return 0;
}
