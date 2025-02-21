#include <stdio.h>

int main() {
      int n;
    scanf("%d",&n);
    int skip=1;
    printf("%d",n);
    for(int i=n;i>=1;i--){
           int z,s;
          if(n%i==0&&i!=n){
              if(skip==0){
                 
                   printf(" %d",i);
                  skip=1;
              }
              else{
                  skip=0;
              }
         }
       }
     printf(".");
    return 0;
}
