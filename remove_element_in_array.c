#include <stdio.h>
// for sort the array in ascending order
void sort(int arr[], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                arr[j] += arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] -= arr[j + 1];
            }
        }
    }
}
// for searching the element in the array
int binarySearch(int arr[], int n, int target){
    int l = 0, h = n - 1, mid;
    while (l <= h){
        mid = (l + h) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
// for removing the element
void removeElement(int arr[], int n, int index){
    for (int i = index; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }
}
// for printing the element
void printNewArray(int arr[], int n){
    printf("\nNew Array..!\n");
    for (int i = 0; i < n - 1; i++){
        printf("%d\t", arr[i]);
    }
}

int main(){
    int arr[] = {14, 6, 19, 5, 20, 10, 15, 3, 7, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, number, index;

    printf("Original array..!\n");
    for (i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }

    printf("\nenter the number to remove: ");
    scanf("%d", &number);

    sort(arr, n);

    index = binarySearch(arr, n, number);

    if (index != -1){
        removeElement(arr, n, index);
        printNewArray(arr, n);
    }
    else
        printf("\nThe element is not present in the array..!");

    return 0;
}
