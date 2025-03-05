#include <stdio.h>

int main() {
  int n;
    scanf("%d",&n);
    if(n>2){
        if(n%2!=0){
            n=n+1;
        }
      for(int i=1;i<=n/2;i++){
          for(int k=1;k<=n/2-i;k++){
              printf(" ");
          }
          for(int j=1;j<=2*i-1;j++){
              if(j==1||j==2*i-1||j==i){
                  printf("*");
              }
              else{
                  printf(" ");
              }
          }
          printf("\n");
      } 
    for(int i=1;i<=n/2;i++){
        for(int k=2;k<=i;k++){
            printf(" ");
        }
        for(int j=1;j<=2*(n/2-i+1)-1;j++){
            if(j==n/2-i+1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    }
    else{
        printf("Shape Not Possible");
    }
    return 0;
}
