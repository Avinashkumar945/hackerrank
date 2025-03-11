#include <stdio.h>

int main() {
     int n,a,z,x;
    x=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int k=0;k<n-i-1;k++){
            printf(" ");
        }
        a=i;
        z=a;
        printf("%d",i);
        if(i!=0){
             for(int j=1;j<=2*i;j++){
                 if(j<=i){
              printf("%d",--z);
              z=z;
            }
            else if(j>i)  {
                printf("%d",++x);
            }
        }
        }
          x=0;
        
        
        printf("\n");
    }
    
    return 0;
}
