#include <stdio.h>

int main() {
int age,ai,tr;
    scanf("%d",&age);
    scanf("%d",&ai);
    scanf("%d",&tr);
    if(age<30){
         printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
        
    }
   
    else if(age>=30&&age<=50){
        if(ai>75000){
            if(tr==3){
                printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
            }
            else if((tr==2)||(tr==1)){
                printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
            }
        }
         else if(ai<=30000){
        if((tr==2)||(tr==1)){
             printf("Low Risk Portfolio: Suitable for conservative investments.");
        }
    }
        else if(ai<=75000){
            if(tr==2){
                printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
            }
        }
      

        
    }
    else if(age>50){
          if(ai<=30000){
        if((tr==2)||(tr==1)){
             printf("Low Risk Portfolio: Suitable for conservative investments.");
        }
    }
        
       else if(ai>75000){
            if(tr==3){
                printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
            }
           else if(tr==2){
            printf("Low Risk Portfolio: Suitable for conservative investments.");
           }
        }
       else if(ai<75000){
            if(tr==2){
                printf("Low Risk Portfolio: Suitable for conservative investments.");
            }
        }

    }
    
       
    return 0;
}

         