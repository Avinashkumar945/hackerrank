#include <stdio.h>

int is_evil_number(int n) {
    int count;
    count=0;
    for(int i=0;i<32;i++){
         int z=n&1<<i;
        if(z!=0){
            count++;
        }
    }
    if(count%2==0)
    return 1;
    else return 0;
}

int main() {
    int n;
    scanf("%d", &n); 
    printf("%d\n", is_evil_number(n));
    return 0;
}
