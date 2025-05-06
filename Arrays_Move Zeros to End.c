#include <stdio.h>

void moveZerosToEnd(int arr[], int n) {
  int s=0;
    for(int i=0;i<=n-1;i++){
      int temp=arr[n-1];
       if(arr[s]==0){
          arr[n-1]=arr[s];
       for(int j=s;j<=n-3;j++){
           arr[j]=arr[j+1];
      }
          arr[n-2]=temp;
    }
      else{
         s++;
      }
  }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    moveZerosToEnd(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
