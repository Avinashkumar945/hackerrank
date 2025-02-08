#include <stdio.h>

int main() {
     int a;
    scanf("%d",&a);
    switch(a){
        case 1 :printf("Player chooses the Left path.\n");
            break;
       case 2 :printf("Player chooses the Middle path.\n");
            break;
            case 3 :printf("Player chooses the Right path.\n");
            break;
            }
    if(a==1){
    int b;
            scanf("%d",&b);
            switch(b){
                case 1:printf("Poor choice, Game Over!\n");
                    return 0;
                    case 2:printf("Player found a bridge.\n");
                    break;
                    
    }
    int c;
                    scanf("%d",&c);
                    switch(c){
                        case 1:printf("Player crosses the bridge safely.\n");
                            break;
                        case 2: printf("Poor luck, Game Over!\n");
                            return 0;
    } 
    }
    else if(a==2){
    int d;
    scanf("%d",&d);
    switch(d){
        case 582 :printf("Player solved the puzzle.\n");
            break;
            default :printf("Foolish player, Game Over!\n");
            return 0;
    }
        }
    else if(a==3){
    int e;
    scanf("%d",&e);
    switch(e){
        case 30:printf("Player solved the puzzle.\n");
            break;
            default :printf("Foolish player, Game Over!\n");
            return 0;
    }
    }
    int f;
    scanf("%d",&f);
    switch(f){
        case 1:printf( "All that glitters is not gold, Game Over!\n");
            break;
            case 2:printf( "All your efforts were for nothing, Game Over!\n");
            break;
            case 3:printf( "Congratulations!! You won the treasure.\n");
            break;
    }
      
    return 0;
}