#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;
    int i = 2; 
    while(n > 1){
        if(n%i == 0){
            sum += i;
            n/=i;
        }
        else i++;
    }
    printf("%d",sum);


    
    return 0;
}
