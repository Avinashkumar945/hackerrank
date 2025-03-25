
#include <stdio.h>
int  primecheck(int num);
int main()
{
    int n,z,check;
    scanf("%d",&n);
    if(n%2!=0||n<=2){
        printf("No Solution");
        return 0;
    }
    
    for(int i=2;i<=n;i++){
         check=primecheck(i);
        if(check==1){
            for(int k=i;k<=n;k++){
                z=i+k;
                if(z==n){
                    int check=primecheck(k);
                    if(check==1){
                        printf("%d %d",i,k);
                        return 0;
                    }
                    else{
                        continue;
                    }
                }
            }
        }
        else{
            continue;
        }
    }
  if(check==0){
      printf("No Solution");
  }
    return 0;
}
 int  primecheck(int num){
      for(int j=2;j<=num;j++){
         if(num%j==0){
             if(num==j){
                return 1;
             }
             else{
                 return 0;
             }
         }
      }
     return 0;
  }
