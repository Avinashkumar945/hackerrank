#include <stdio.h>

int main() {
     int n,z;
      
    int flag=0;
    int a=3;
    scanf("%d",&n);
    int i=1;
    if(n!=1){
    while(i<n){
        for(int j=2;j<a;j++){
            if(a%j==0){
                flag=1;
                break;
               
            }
            else{
                 flag=0;
                continue;
            }
        }
         if(flag==0){
              z=a;
              i++;
           }
        a++;
    }
    printf("%d",z);
    }
    else{
        printf("2");
    }
    
    return 0;
}
