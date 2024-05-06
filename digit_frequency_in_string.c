#include <stdio.h>
#include <string.h>
int main(){
    char str[50];
    int i, j,c;
    printf("Enter the string: ");
    scanf("%s", str);
 
    for(i = 0;i<10;i++){
        c = 0;
        for(j = 0;j<strlen(str);j++){
            if(i == (str[j] - 48))
                c++;
        }
        printf("%d\t",c);
    }

    return 0;
}
