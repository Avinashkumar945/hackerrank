#include <stdio.h>

int main() {     
   int n,t,z;
    scanf("%d %d",&n,&t);
    z=~n|~t;
    z=~z;
    printf("%d",z);
return 0;
}