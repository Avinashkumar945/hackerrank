#include <stdio.h>

int main() {
    
    int budget,numGuests, foodCostPerGuest, decorationCost, musicCost,  extraExpenses,totalcost;
    scanf("%d",&budget);
    scanf("%d",&numGuests);
    scanf("%d",&foodCostPerGuest);
    scanf("%d",&decorationCost);
    scanf("%d",&musicCost);
    scanf("%d",&extraExpenses);
    if((numGuests>25)&&(musicCost>0)) {
        totalcost=foodCostPerGuest*numGuests + decorationCost + musicCost + extraExpenses;
        if(totalcost<budget) {
        if((numGuests>25)&&(numGuests<=50)) {
        if(((decorationCost) < (budget*30/100))||((foodCostPerGuest*numGuests) < (budget*50/100))) {
                printf("Celebration Approved");
            }
             else {
        printf("Celebration Denied");
    }   
        }
             else {
        printf("Celebration Denied");
    }   
    }
         else {
        printf("Celebration Denied");
    }
      
    }
    else  {
        totalcost=foodCostPerGuest*numGuests + decorationCost + extraExpenses;
        if(totalcost < budget) {
        if((numGuests > 5)&&(numGuests <=25)) {
        if(((decorationCost) < (budget*30/100))||((foodCostPerGuest*numGuests) <(budget*50/100))) {
                printf("Celebration Approved");
            }
            else {
        printf("Celebration Denied");
    }
        }
            else {
        printf("Celebration Denied");
    }
    }
     else {
        printf("Celebration Denied");
    }   
}
    
        return 0;
    }