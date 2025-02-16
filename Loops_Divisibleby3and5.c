#include <stdio.h>

int main() {
     int num;
     for(int i=1;i<=100;i++){
          if(i%3==0&&i%5==0){
              printf("%d\n",i);
          }
    }
    
    return 0;
}
