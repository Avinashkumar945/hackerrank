#include <stdio.h>

int main() {
    int n,t;
    scanf("%d",&n);
    t=n&(n-1);
    printf("%d",t);
       
    return 0;
}