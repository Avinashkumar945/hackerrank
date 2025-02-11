#include <stdio.h>

int main() {
    int n,z;
    scanf("%d",&n);
    z=n>>31;
    z=z&1;
    if(z){
        printf("Negative");
    }
    else{
        printf("Positive");
    }
    
    return 0;
}