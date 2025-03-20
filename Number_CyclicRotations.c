#include <stdio.h>
  
int main() {
     long long int n,count,temp,lastdigit,countc;
    countc=0;
    count=0;
   int flag=0;
    scanf("%lld",&n);
    temp=n;
     for(int i=1;n!=0;i++){
        n/=10;
        count++;
    }
    for(int k=1;k<=count;k++){
        n=temp;
        temp=n;
      for(int i=1;n!=0;i++){
        n/=10;
      }
       n=temp;
    lastdigit=n%10;
        n/=10;
    for(int j=1;j<count;j++){
       lastdigit=lastdigit*10;
    }
     n=lastdigit+n;
        printf("%lld\n",n);
      temp=n;
        
    }
    
    return 0;
}
