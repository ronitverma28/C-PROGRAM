#include <stdio.h>
int main() {
    int arr[] = {10, 11, 16, 17, 2, 7, 1, 8, 5, 19, 3};
    int len = sizeof(arr) / sizeof(arr[0]);
    int i,j, key;
    for(i = 0;i<len;i++){
        key = arr[i];
        j = i-1 ;
        while(j>=0 && key < arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    printf("Sorted array : \n");
    for(i = 0;i<len;i++){
        printf("%d ", arr[i]);
    }
}
