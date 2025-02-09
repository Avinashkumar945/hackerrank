#include <stdio.h>
int main() {
   int n,i,t;
    scanf("%d %d",&n,&i);
    t=n&~(1<<i);
    printf("%d",t);
    return 0;
}