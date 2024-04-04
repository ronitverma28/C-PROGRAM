#include <stdio.h>
int fact(int n){
    int f = 1;
    if(n == 0)
        return 1;
    else{
        f = n * fact(n-1);
        return f;
    }
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Factorial = %d", fact(n));
    return 0;
}
