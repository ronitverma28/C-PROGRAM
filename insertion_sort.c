#include <stdio.h>
#include <stdbool.h>
int main() {
    int arr[] = {10, 11, 16, 17, 2, 7, 1, 8, 5, 15, 12, 18, 9, 14, 13, 6, 4, 20, 19, 3};
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
 
    return 0;
}
