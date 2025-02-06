#include <stdio.h>

int main() {
int n;
    float rate;
    int flag;
    flag=1;
    scanf("%d",&n);
    if(n>300){
      rate=(200*7 + 100*5 + (n-300)*10);
          if(rate<=1200){
              rate=(rate-(rate*10/100));  
          }
    }
    else if((n<=300)&&(n>100)){
      rate= (100*5 + (n-100)*7);
          if(rate<=1200){
              rate=(rate-(rate*10/100));  
          }
    }
    else if((n<=100)&&(n>=0)){
      rate= n*5;
          if(rate<=1200){
              rate=(rate-(rate*10/100));  
          }
    }
    else{
        printf("Invalid Input!");
        flag=0;
    }
    if(flag==1){
        printf("The electricity bill is: %.2f.",rate);
    }
      
    return 0;
}