#include <stdio.h>
int main(){
    int n,c;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i = 2;i<=n;i++){
        c = 0;
        for(int j = 2;j<=i;j++){
            if(i%j == 0)
                c++;
        }
        if(c == 1)
            printf("%d\n",i);
    }
    return 0;
}
