#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    n=n<<30;

    if(n==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
  return 0;
}