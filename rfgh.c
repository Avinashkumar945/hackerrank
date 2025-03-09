#include <stdio.h>

int main() {
   int n,a,b,c;
     c=0;
    a=n-1;

    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",++c);
        b=c;
       for(int j=2;j<=i;j++){
          b=b+a;
       printf("%d ",b);  
        a--;
     }
        
       a=n-1; 
        printf("\n");
    }
        
    return 0;
}
