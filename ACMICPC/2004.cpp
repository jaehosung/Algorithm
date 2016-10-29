#include<iostream>
using namespace std;

long long zeronum(long long n){
    long long ans = 0;
    for(long long i = 5; i <= n; i*=5){
        ans += n/i;
    }
    return ans;
}

long long zeronum2(long long n){
    long long ans = 0;
    for(long long i = 2; i <= n; i*=2){
        ans += n/i;
    }
    return ans;
}


int main(){
    long long n,m;
    long long ans,ans2;
    long output;
    cin >> m >> n;

    ans = zeronum(m)-zeronum(m-n)-zeronum(n);
    ans2 = zeronum2(m)-zeronum2(m-n)-zeronum2(n);

    output = (ans>ans2)?  ans2 : ans;
    cout << output;


    return 0;
}
