#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int n,z,temp,square;
    z=1;
    scanf("%d",&n);
    temp=n;
    square=n*n;
    while(n!=0){
        n/=10;
        z=z*10;  
    }
   int lastdigit=square%z;
    if(lastdigit==temp){
        printf("%d is automorphic",temp);
    }
    else{
         printf("%d is not automorphic",temp);
    }
    
}
