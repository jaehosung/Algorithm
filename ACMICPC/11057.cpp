#include<iostream>
using namespace std;

long long  arr[1001][11];
long long mod = 10007;
long long sum = 0;

int main(){
    int n;
    cin >> n;
    for(int j = 0; j<=9; j++){
        arr[1][j] = 1;
    }

    for(int i = 2; i <= n; i++){
        for(int j = 0; j<=9; j++){
            arr[i][j] = 0;
            for(int k = 0; k<=j; k++){
                arr[i][j] += arr[i-1][k];
            }
            arr[i][j] %= mod;
        }
    }
    
    for(int i = 0; i <= 9; i++){
        sum += arr[n][i];
    }


    sum %= mod;
    cout<<sum<<endl;

    return 0;
}
