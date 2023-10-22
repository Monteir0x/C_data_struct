#include <stdio.h>

void bubblesort(int arr[], int lenght){
    int curr = 0;
    for (int i = 0; i < lenght; i++) {
        for (int j = i +1; j < lenght; j++) {
            if (arr[i] > arr[j]) {
            curr = arr[i];
            arr[i] = arr[j];
            arr[j] = curr;
            } 
        }
    }
}
