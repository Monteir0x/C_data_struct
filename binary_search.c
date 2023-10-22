#include <stdio.h>
#include "bubble_sort.c"

int binary_search(int arr[], int key, int length){
    int i = 0, left = 0, middle = 0, right = length;
    while (left < right) {
        middle = (left + right) /2;
        if (arr[middle] == key) return arr[middle]; 
        if (middle < key){
            left = middle +1;
        }
        else{
            right = middle -1;
        }
    }
return -1;
}
