#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[] = {10, 9, 5, 1, 2, 3, 6};
    int len = sizeof(arr) / sizeof(arr[0]);
    int n, low = 0, high = len-1, mid;
    bool search = false;

    printf("Enter the number to find in the array : ");
    scanf("%d", &n);
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

    while (low <= high)
    {   
        mid = (low + high) / 2;
        if (arr[mid] == n)
        {
            search = true;
            break;
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

    (search)?printf("%d is present at %d", n, mid):printf("%d is not present in the array", n);
    return 0;
}
