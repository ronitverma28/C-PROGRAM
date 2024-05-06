#include <stdio.h>
int main(){
    int arr[] = {1,1,2,5,6,6,4,3,2,7,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i,j,x = 0;
    for(i = 0;i<n;i++){
        for(j = 0;j<n;j++){
            if(arr[j]>arr[j+1]){
                arr[j] += arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] -= arr[j+1];
            }
        }
    }
    
    for(i = 0;i<n;i++){
        x = 0;
        if(arr[i] != arr[i-1]){
            for(j = i+1;j<n;j++){
                if(arr[i] == arr[j])
                    x++;
            }
            if(x>0)
                printf("%d\t", arr[i]);
        }
    }

    return 0;
}
