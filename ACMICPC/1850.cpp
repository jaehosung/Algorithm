#include<iostream>
#include<cmath>
using namespace std;


long long gcd (long long n, long long m){
    if(m ==0){
        return n;
    }else{
        return gcd(m,n%m);
    }
}

int main(){
    long long n,m;
    long long diff;
    cin >>n>>m;
    diff = gcd(n,m);

    for(long long i = 1; i <= diff; i++){
        cout<<1;
    }
    return 0;
}
