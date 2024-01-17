#include <stdio.h>
#include <stdbool.h>

int main(){
    int arr[] = {10,5,6,2,1,15,8,9,7};
    int len = sizeof(arr) / sizeof(arr[0]);
    int n, i = 0;
    bool search = false;

    printf("Enter the number to find in the array : ");
    scanf("%d", &n);
    for (int i = 0; i < len; i++){
        for (int j = i + 1; j < len; j++){
            if (arr[i] > arr[j]){
                arr[i] += arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] -= arr[j];
            }
        }
    }
    while (i<len){
        if (arr[i] == n){
            search = true;
            break;
        }
        i++;
    }
    (search)?printf("%d is present at %d", n, i):printf("%d is not present in the array", n);

    return 0;
}
