#include <stdio.h>

int main() {
   int n,a,s,d;
    a=1;
    d=3;
    s=0;
     scanf("%d",&n);
     for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf("  ");
        }
        for(int o=1;o<=2*i-2;o++){
            s=s+d;
            d=d+2;
        }
        for(int j=1;j<=2*i-1;j++){
            
            if(i!=j||i==1){
           printf("%d ",a);
              a+=2;
            }
            else{
                
                printf("%d ",s);
            }
           
        }
        if(i!=1){
            s=0;
    }
        
        printf("\n");
    }
   
    return 0;
}
