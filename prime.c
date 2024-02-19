#include <stdio.h>
int main() {
    int i, c = 0;
    int n = printf("enter any number: ");
    scanf("%d", &n);
    for(i = 1;i<=n;i++){
        if(n % i == 0){
            c++;
        }
    }
    (c==2) ? printf("prime") : printf("not prime");

    return 0;
}
