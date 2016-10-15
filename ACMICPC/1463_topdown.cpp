#include<iostream>
using namespace std;

int d[1000001]={0,};

int func(int n){

    if(n==1){
        return 0;
    }
    if(d[n]>0) // this is the reason of dynamic programming
        return d[n];

    d[n] = func(n-1) + 1;

    if(n%2==0){
        int temp = func(n/2) + 1;
        if(temp<d[n])
            d[n] = temp;
    }

    if(n%3==0){
        int temp = func(n/3) + 1;
        if(temp<d[n])
            d[n] = temp;
    }


    return d[n];
}


int main(){
    int n;
    cin >> n;

    cout << func(n);

    return 0;
}
