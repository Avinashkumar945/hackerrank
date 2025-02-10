#include <stdio.h>

int main() {
     int n,i,p;
    scanf("%d %d",&n,&i);
     p=(n>>i)&1;
    if(p==1){
    printf("1");
    }
    else {
        printf("0");
    }
    return 0;
}