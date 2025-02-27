#include <stdio.h>

int main() {
   int n,z,max;
    scanf("%d",&n);
    if(n>1){
    if(n%3==0){
        printf("%d ",n);
        
        z=n;
        max=z;
    }
    else if(n%5==0&&n%3!=0){
        printf("%d ",n);
        z=n;
        max=z;
    }
        else{
            printf("%d ",n);
            z=n;
            max=z;
        }
    for(int i=1;i>=1;i++){
          if(z%3==0&&z!=0){
                z=z/3;
                printf("-> %d ",z);
                if(max<z){
                    max=z;
                }
              
              }
            else if(z%5==0&&z%3!=0){
                z=z-5;
                printf("-> %d ",z);
            
                if(max<z){
                    max=z;
                }
        }
        else if(z<1){
            z=1;
            printf("-> %d ",z);
            
            if(max<z){
                max=z;
            }
        }
        else {
           z=z*5;
           printf("-> %d ",z);
            
            if(max<z){
                max=z;
            }
        }
           if(z==1){
               printf("\n");
               printf("Max Number: %d",max);
               return 0;
           }
          
        }
    }
    
     else if(n==1){
         printf("1\n");
         printf("Max Number: 1");
         
     }
    else{
        printf("%d -> 1\n",n);
        printf("Max Number: 1");
    }
    
    
    return 0;
}
