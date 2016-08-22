#include<stdio.h>
int main(){
    int month,day;
    scanf("%d%d",&month,&day);
    switch(month){
        case 12 :
            day+=30;
        case 11 :
            day+=31;
        case 10 :
            day+=30;
        case 9 :
            day+=31;
        case 8 :
            day+=31;
        case 7 :
            day+=30;
        case 6 :
            day+=31;
        case 5 :
            day+=30;
        case 4 :
            day+=31;
        case 3 :
            day+=28;
        case 2 :
            day+=31;
        case 1 :
            break;
    }
    day = (day-1)%7;
    switch(day){
        case 0 :
            printf("MON");
            break;
        case 1 :
            printf("TUE");
            break;
        case 2 :
            printf("WED");
            break;
        case 3 :
            printf("THU");
            break;
        case 4 :
            printf("FRI");
            break;
        case 5 :
            printf("SAT");
            break;
        case 6 :
            printf("SUN");
            break;
    }
    return 0;
}
