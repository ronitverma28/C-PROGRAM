#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[] = {10,5,6,2,1,15,8,9,7};
    int len = sizeof(arr) / sizeof(arr[0]);
    int n = 5, i = 0;
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
    while (search = true)
    {
        if (arr[i] == n)
        {
            printf("%d is present at %d", n, i);
            search = true;
        }
        i++;
    }
    return 0;
}