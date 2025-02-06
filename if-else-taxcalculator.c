    #include <stdio.h>
int main() {
    float income;
    float tax;
    int flag=1;
    scanf("%f",&income);
    if(income>1000000){
        tax=250000*5/100 + 500000*20/100 +(income-1000000)*30/100;
    }
     else if((income>500000)&&(income<=1000000)){
        tax=250000*5/100 + (income-500000)*20/100;
    }
    else if((income>250000)&&(income<=500000)){
        tax=(income-250000)*5/100;
    }
    else if((income<=250000)&&(income>=0)){
        tax=0;
    }
    else{
        printf("INVALID");
        flag=0;
    }
    if(flag==1){
        printf("%.2f",tax);
    }
    
    return 0;
}