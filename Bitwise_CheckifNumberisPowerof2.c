#include <stdio.h>

int main() {

    int n,t;
    scanf("%d",&n);
    t=n&(n-1);
    if((t==0)&&(n!=0)){
        printf("Yes");
    }
    else{
         printf("No");
    }
    return 0;
}