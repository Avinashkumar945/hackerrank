#include <stdio.h>

int main() {
   int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;(j<=2*i-1&&i%2!=0)||(j<=2*i&&i%2==0);j++){
            if(i%2==0){
                if(j%2==0){
                    printf("%d ",j);
                }
            }
            else{
                if(j%2!=0){
                    printf("%d ",j);
                }
                
            }
        }
       printf("\n");
    }
      
    return 0;
}
