#include <stdio.h>
#include <stdbool.h>
int main() {
    int arr[] = {10, 11, 16, 17, 2, 7, 1, 8, 5, 15, 12, 18, 9, 14, 13, 6, 4, 20, 19, 3};
    int len = sizeof(arr) / sizeof(arr[0]);
    int i,j,v,l,h;
    bool search = false;
    int n = printf("enter the number : ");
    scanf("%d", &n);
    
    for(i = 0;i<len;i++){
        for(j = i+1;j<len;j++){
            if(arr[i] > arr[j]){
                v = arr[i];
                arr[i] = arr[j];
                arr[j] = v;
            }
        }
    }
    l = 0;
    h = len-1;
    while(l<=h){
        v = (l+h)/2;
        if(arr[v] == n){
            search = true;
            break;
        }
        else if(n < arr[v]){
            h = v-1;
        }
        else{
            l = v+1;
        }
    }
    
    (search)? printf("the element is present"):printf("element is not present");

    return 0;
}
