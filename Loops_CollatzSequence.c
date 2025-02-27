#include <stdio.h>

int main() {
   int n,z;
    scanf("%d",&n);
    int flag=1;
    if(n>1){
    if(n%2==0){
        printf("%d ",n);
        flag=0;
        z=n;
    }
    else{
        printf("%d ",n);
        z=n;
    }
    for(int i=1;i>=1;i++){
          if(z%2==0&&flag==0){
                z=z/2;
                printf("-> %d ",z);
              }
            else{
                z=3*z+1;
                printf("-> %d ",z);
                flag=0;
        }
           if(z==1){
               return 0;
           }
          
        }
    }
     else if(n==1){
         printf("%d",n);
     }
    
    return 0;
}
