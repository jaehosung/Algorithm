#include<iostream>
using namespace std;

long long  arr[101][11];
long long mod = 1000000000;
long long sum=0;

int main(){
    int n;
    cin >> n;
    for(int j = 1; j<=9; j++){
        arr[1][j] = 1;
    }
    for(int j = 1; j<=n; j++){
        arr[j][0] = 0;
        arr[j][10] = 0;
    }

    for(int i = 2; i <= n; i++){
        for(int j = 0; j<=9; j++){
            arr[i][j] = 0;
            if(j==0){
                arr[i][j] += arr[i-1][j+1];
            }else{
                arr[i][j] += arr[i-1][j-1] + arr[i-1][j+1];
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
