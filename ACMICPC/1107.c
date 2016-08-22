#include<stdio.h>

int difference(int a, int b){
    if(a>b)
        return a-b;
    else
        return b-a;
}

int possible(int test,int broken[10]){

    //0 digit sensing
    do{
        if(broken[test%10]==0){
            return 0;
        }
        test = test/10;

    }while(test!=0);

    //}while(test/10!=0);
    //Already dived the value to 10 but divided again`
    return 1;
}

int main(){

    int num,i,min;
    int n,broken[10];//if broken == 0
    scanf("%d%d",&num,&n);

    for(i=0;i<10;i++){
        broken[i]=1;
    }

    for(i=0;i<n;i++){
        int _n;
        scanf("%d",&_n);
        broken[_n]=0;
    }

    min = difference(100,num);

    for(i=0;i<=1000000;i++){
        int digit=1,_i;
        _i = i;
        while(_i/10!=0){
            digit++;
            _i /=10;
        }

        if(possible(i,broken)){
            if(min>(difference(num,i)+digit)){
                min = difference(num,i) + digit;
            }
        }
    }

    printf("%d\n",min);

    return 0;
}
