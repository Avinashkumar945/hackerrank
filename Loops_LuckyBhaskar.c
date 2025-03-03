#include <stdio.h>

int main() {
    double x,min;
    int n;
    double loss,profit;
   scanf("%lf %d",&x,&n);
     min=x;
     double intial=x;
    if(n>=0){
    for(int i=1;i<=n;i++){
        if(i%2!=0&&i%3!=0){
           loss=x*10/100;
            x=x-loss;
            if(min>x){
                min=x;
            }
        }
        else if(i%2==0&&i%3==0){
           profit=x*70/100;
            x=x+profit;
            i=i+6;
             if(min>x){
                min=x;
            }
        }
       else if(i%3==0){
            loss=x*1/5;
            x=x-loss;
            if(min>x){
                min=x;
            }
        }
        else if(i%2==0){
            loss=x*1/8;
            x=x-loss;
             if(min>x){
                min=x;
            }
        }
        
        if(x<40*intial/100&&i!=n){
             printf("Stopped early after %d days: %0.2f \n",i,x);
            printf("Minimum amount held by Bhaskar: %0.2f\n",min);
            printf("Better Luck Next Time!");
              return 0;
        }
       
}
    if(x>70*intial/100){
             printf("After %d days: %0.2f \n",n,x);
            printf("Minimum amount held by Bhaskar: %.2f\n",min);
            printf("Lucky Bhaskar");
              
        }
    else{
         printf("After %d days: %0.2f \n",n,x);
            printf("Minimum amount held by Bhaskar: %.2f\n",min);
            printf("Better Luck Next Time!");
    }
    }
     
    
       
    return 0;
}
