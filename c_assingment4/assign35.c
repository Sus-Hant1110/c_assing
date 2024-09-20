// WAP to sort the elements of an array entered by the user. You can use the array size of 10.

#include <stdio.h>

int main(){

    int arr[10];
    int i, j, temp;

    printf("Enter 10 numbers: \n");

    for(i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 10; i++){
        for(j = i + 1; j < 10; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array: \n");

    for(i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}