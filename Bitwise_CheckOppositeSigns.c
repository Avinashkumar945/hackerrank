#include <stdio.h>

int main() {
     int a,b,z,d,s;
     scanf("%d %d",&a,&b);
     d=a>>31&1;
     s=b>>31&1;
    if((d==0&&s!=0)||(d!=0&&s==0)){
        printf("Yes");
    }
    else{
        printf("No");
} 
    
    return 0;
}