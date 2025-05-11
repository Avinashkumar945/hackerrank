#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n){
  int flag=1;
  for(int i=1;i<=n-1;i++){
    for(int j=0;j<=n-2;j++){
      if(arr[j]>arr[j+1]){
        int temp=arr[j];
       arr[j]=arr[j+1];
        arr[j+1]=temp;
        
      }
   }
  }
 for(int k=n-1;k>0;k--){
   if (arr[k]==arr[(k-1)]){
     
   }
   else{
     return arr[k-1];
    }
 }
  
    return -1;
  
}
int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findSecondLargest(arr, n));
    return 0;
}
