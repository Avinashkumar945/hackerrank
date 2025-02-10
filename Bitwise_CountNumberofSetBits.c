#include <stdio.h>

int main() {
    int n,z;
    scanf("%d",&n);
     z=(n&15)^15;
    if(z==0){
        printf("4");
    }
    else if(z==8||z==4||z==2||z==1){
       printf("3");
   }
   else if(z==15){
       printf("0");
   }
  else if(z<13&&z%3==0||z%5==0){
       printf("2");
   }
   else{
       printf("1");
   }



    return 0;
}