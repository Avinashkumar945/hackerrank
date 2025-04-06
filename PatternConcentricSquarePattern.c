#include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  for(int i=0;i<2*n-1;i++){                    
    for(int j=0;j<2*n-1;j++){
      if(j>=i&&i<=n-1&&j<2*n-i-1){
        printf("%d ",n-i);
      }
      else if(j<n-1&&i<2*n-j-1){
        printf("%d ",n-j);
      }
      else if(i<=j) {
        printf("%d ",j-n+2);
      }
      else{
        printf("%d ",i-n+2);
      }
    }
    printf("\n");
  }
    return 0;
}
