#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n%2!=0){
        for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           if(i==n-1||j==n/2||i==0){
               printf("*");
           }
           else{
               printf(" ");
           }
       }
       printf("  ");
       for(int j=0;j<n;j++){
           if(i==j||j==0||j==n-1){
               printf("*");
           }
           else{
               printf(" ");
           }
       }
           printf("  "); 
             for(int j=0;j<n;j++){
           if(i==j||j==0||j==n-1){
               printf("*");
           }
           else{
               printf(" ");
           }
       }
            
        printf("  ");
        for(int j=0;j<n;j++){
           if(((j==0||j==n-1)&&(i!=0&&i!=n-1))||((i==0||i==n-1)&&(j!=0&&j!=n-1))){
               printf("*");
           }
           else{
               printf(" ");
           }
       }
        printf("  ");
       for(int j=0;j<2*n;j++){
           if((i==j&&j<n)||(i+j==2*n-2&&j>n-2)){
               printf("*");
           }
           else{
               printf(" ");
           }
       }
        printf("  ");
       for(int j=0;j<=n-1;j++){
           if(j==0&&i!=0||i==0&&j!=0&&j!=n-1||j==n-1&&i!=0||i==n/2){
               printf("*");
           }
           else{
               printf(" ");
           }
       }
        printf("  ");
        for(int j=0;j<n;j++){
           if(i==0||j==n/2){
               printf("*");
           }
           else{
               printf(" ");
           }
       }
       
        printf("  ");
       for(int j=0;j<n;j++){
           if(i==n-1||j==n/2||i==0){
               printf("*");
           }
           else{
               printf(" ");
           }
       }
        printf("  ");
       for(int j=0;j<n;j++){
           if(((j==0||j==n-1)&&(i!=0&&i!=n-1))||((i==0||i==n-1)&&(j!=0&&j!=n-1))){
               printf("*");
           }
           else{
               printf(" ");
           }
       }
        printf("  ");
       for(int j=0;j<n;j++){
           if(i==j||j==0||j==n-1){
               printf("*");
           }
           else{
               printf(" ");
           }
       }
       printf("\n");
            
   }
    }  
        
    
        
    return 0;
}
