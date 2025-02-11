#include <stdio.h>

int main() {
       int a,b,z,t,s;
    scanf("%d %d",&a,&b);
      z=a-b;
       t=z>>31;
      s=t&1;
      if(s){
          printf("%d",a);
      }
    else{
        printf("%d",b);
    }
      
     
    return 0;
}