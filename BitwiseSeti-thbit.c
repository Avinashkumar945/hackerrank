#include <stdio.h>
int main() {
    int n,i,t;
    scanf("%d",&n);
    scanf("%d",&i);
    t=n|(1<<i);
    printf("%d",t);
    return 0;
}