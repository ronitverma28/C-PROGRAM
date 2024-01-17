#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[] = {10, 9, 5, 1, 2, 3, 6}, low, high, mid;
    int len = sizeof(arr) / sizeof(arr[0]);
    int n = 3;
    bool search = false;
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] > arr[j])
            {
                arr[i] += arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] -= arr[j];
            }
        }
    }

    while (search != true)
    {
        low = 0;
        high = len - 1;
        mid = (low + high) / 2;
        if (arr[mid] == n)
        {
            search = true;
            printf("%d is present at %d", n, mid);
        }
        else if (n < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return 0;
}