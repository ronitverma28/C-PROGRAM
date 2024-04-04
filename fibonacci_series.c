#include <stdio.h>
int fabo(int n){
    if(n == 0)
        return 0;
    else if(n == 1 || n == 2)
        return 1;
    else
        return (fabo(n-1) + fabo(n-2));
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    for(int i = 1;i<=n;i++){
        printf("%d\t", fabo(i));
    }
    return 0;
}
