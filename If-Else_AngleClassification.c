#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include<stdio.h>
int main() {
   int x;
    scanf("%d",&x);
    if(x!=0){
        if((x%360==0)&&(x!=0)){
        printf("Full Rotation");
    }
    else if((x%360)>180){
        printf("Reflex Angle");
    }
    
    else if(x%180==0){
        printf("Straight Angle");
    }
    else if((x%360)>90){
        printf("Obtuse Angle");
    }
    
    else if(x%90==0){
        printf("Right Angle");
    }
        else {
        printf("Acute Angle");
    }
    
    }
    else {
        printf("Acute Angle");
    }
    
        
    return 0;
}
