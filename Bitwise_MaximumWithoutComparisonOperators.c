#include <stdio.h>

int main() {
     int a,b,s,z;
    scanf("%d %d",&a ,&b);
    z=(a-b);
    z=z>>31;
    
    s=(b&z)|(a&~z);
    printf("%d",s);
    
    return 0;
}