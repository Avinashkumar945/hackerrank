#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n>1){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j==i||j==1||i==n){
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        for(int k=2;k<=2*(n-i+1)-1;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            if(i==1||i==n||j==i||j==1){
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
        }
       else{
           printf("Shape Not Possible");
       }
    return 0;
}
