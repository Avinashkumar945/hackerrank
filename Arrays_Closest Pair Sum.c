#include <stdio.h>

int main(){
    int n,sum,pos1,pos2,diff;
  pos1=-1;
  pos2=-1;
    scanf("%d",&n);
    int a[n];
  for(int i=0;i<=n-1;i++){
    scanf("%d",&a[i]);
  }
  int target;
   scanf("%d",&target);
   int neartarget=-1000000000;
   int mindiff=1000000000;
  for(int i=0;i<=n-1;i++){
     for(int j=i+1;j<=n-1;j++){
       sum=a[i]+a[j];
       if(target>=sum){
         diff= target-sum;
       }
       else{
         diff = sum - target;
       }
       if(mindiff>diff){
         pos1=i;
         pos2=j;
         mindiff=diff;
        }
    }
    
  }
  printf("%d %d",a[pos1],a[pos2]);
    return 0;
}
