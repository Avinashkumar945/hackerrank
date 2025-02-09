#include <stdio.h>

int main() {
      int a,b,t,s;
    scanf("%d",&a);
    scanf("%d",&b);
    t=(a^b)^b;
    s=(a^b)^a;
    printf("%d\n",s);
    printf("%d",t);
    
    
 return 0;
}