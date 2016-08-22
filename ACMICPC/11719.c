#include<stdio.h>
int main(){
    char str;
    while((str=getchar())&& (str!= EOF)){
        printf("%s",str);
    }

    return 0;
}
