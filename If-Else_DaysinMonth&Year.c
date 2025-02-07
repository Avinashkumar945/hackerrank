#include <stdio.h>
#include <string.h>

int main() {
     int month,year,days;
    int flag=1;
    scanf("%d",&month);
    scanf("%d",&year);
    if((month>0)&&(month<=12)&&(year>0)){
        if(month==2){
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
                days=29;
            }
          else {
         days=28;
      }
   }
     else if(month==8){
            days=31;
    }
    else if((month%2!=0)&&(month<=7)){
     days=31;
    }
      else if((month%2==0)&&(month>7)){
          days=31;
      }      
    else {
        days=30;
    }
}
    else{
        if((month<=0)||(month>12)){
        printf( "Invalid Month\n");
        }
         if(year<=0){
        printf( "Invalid Year");
       
        }
         flag=0;
    }
    if(flag==1){
        printf("%d",days);
}
        
    return 0;
}