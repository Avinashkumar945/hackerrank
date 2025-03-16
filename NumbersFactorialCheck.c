#include <stdio.h>

int main() {
     long long int n,flag,z;
    flag=1;
    z=1;
    scanf("%lld",&n);
    for(int i=1;i>=1;i++){
        z=z*i;
        if(z==n){
            flag=0;
             z=i;
            break;
        }
        else if(z>n){
            break;
        }
        else{
            continue;
        }
        }
    if(flag==0){
        printf("%lld",z);
    }
    else{
        printf("NO");
    }
    return 0;
}
