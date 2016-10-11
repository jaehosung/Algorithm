#include<stdio.h>

char arr[100001];
int segment=0;
int leftP=0;

void opFun(){
    int n = 0;
    while(arr[n]!='\0'){
        if(arr[n] =='('){
            leftP++;
            n++;
        }else{
            segment += (leftP-1);
            leftP--;
            if(arr[n+1] == ')'){
                n++;
                while(arr[n]==')'){
                    leftP--;
                    segment++;
                    n++;
                }
            }else{
                n++;
            }
        }
    }
}

int main(){
    scanf("%s",arr);
    opFun();

    printf("%d",segment);

    return 0;
}
