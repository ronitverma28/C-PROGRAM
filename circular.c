#include <stdio.h>
int main(){
    int n = 5, x;
    for (int i = 1; i < 2 * n; i++){
        for (int j = 1; j < 2 * n; j++){
            if ((i <= n && j <= i) || (i > n && j <= 2 * n - i))
                x = n - j + 1;
            else if ((i <= n && j >= 2 * n - i) || (i > n && j >= i))
                x = j - n + 1;
            else if (i <= n)
                x = n - i + 1;
            else
                x = i - n + 1;
            printf("%d ", x);
        }
        printf("\n");
    }
    return 0;
}
