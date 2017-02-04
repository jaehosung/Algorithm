#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int check[1000000] ={0,};

int powDigit(int n, int k){
    int ans = 0;
    for(int i=6; i>=0; i--){
        int temp = n/(pow(10,i));
        ans += pow(temp,k);
        n -= pow(10,i)*temp;
    }
    return ans;
}

int dfs(int n, int length,int k){
    if(check[n] != 0){
        return check[n];
    }else{
        check[n] = length;
        return dfs(powDigit(n,k),length+1,k);
    }
}


int main(){
    int n, k;
    cin >> n >> k;

    cout <<dfs(n,1,k)-1;
    return 0;
}
