#include <stdio.h>
int main(){
    int n, c, k = 1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i = 1;i<=n;){
        c = 0;
        for(int j = 2;j<=k;j++){
            if(k%j == 0)
                c++;
        }
        if(c == 1){
            printf("%d\n",k);
            i++;
        }
        k++;
    }
    return 0;
}
