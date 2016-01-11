#include<stdio.h>
int main(){
    int burger, drink, side, dessert;
    int total=0;
    scanf("%d%d%d%d",&burger,&drink,&side,&dessert);
    if(burger==1) total += 461;
    else if(burger==2) total += 431;
    else if(burger==3) total +=420;

    if(drink==1) total += 130;
    else if(drink==2) total += 160;
    else if(drink==3) total += 118;

    if(side==1) total += 100;
    else if (side==2) total += 57;
    else if (side==3) total += 70;

    if(dessert==1) total += 167;
    else if(dessert==2) total += 266;
    else if(dessert==3) total += 75;

    printf("Your total Calorie count is %d.",total);
    return 0;
}
