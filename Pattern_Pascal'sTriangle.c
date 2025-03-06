#include <stdio.h>

int main() {
     int n,c,z;
    c=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int k=0;k<n-i-1;k++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
         if(j==0){
              printf("1 ");
          }
            else{
                z=(c*(i-j+1))/j;
                printf("%d ",z);
                c=z;
            }
          
        }
        c=1;
        printf("\n");
    }
    return 0;
}
