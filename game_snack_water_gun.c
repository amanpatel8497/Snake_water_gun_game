#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakeWaterGun(char you, char comp){
    if(you==comp){
        return 0;
    }
    if(you=='s' && comp=='w'){
        return 1;
    }
    else if(you=='w' && comp=='s'){
        return -1;
    }
    if(you=='g' && comp=='s'){
        return 1;
    }
    else if(you=='s' && comp=='g'){
        return -1;
    }
    if(you=='w' && comp=='g'){
        return 1;
    }
    else if(you=='g' && comp=='w'){
        return -1;
    }
}

int main(){
    char you,comp,number;
    srand(time(0));
    number=rand()%100+1;
    if(number>33){
     comp='s';
    }
    else if(number<33 && number>66){
        comp='g';
    }
    else{
        comp='w';
    }
    //comp = 's';
    printf("Enter 's' for snake ,'w' for water and 'g' for gun\n ");
    scanf("%c",&you);
    int result=snakeWaterGun(you,comp);
    printf("you choise %c and comp choise %c\n",you,comp);
    if(result==0){
        printf("Game Drow");
    }
    else if(result==1){
        printf("you win");
    }
    else{
        printf("you lose");
    }

    return 0;
}