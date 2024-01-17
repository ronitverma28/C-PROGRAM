#include <stdio.h>
int main(){
    int arr[] = {10,9,5,1,2,3,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0;i<n;i++){
        for(int k = i;k>0;k--){
            if(arr[k] < arr[k-1]){
                int temp = arr[k];
                arr[k] = arr[k-1];
                arr[k-1] = temp;
            }
        }
    }

    printf("Sorted array is\n");
    for(int i = 0;i<n;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}