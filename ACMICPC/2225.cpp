#include<iostream>
using namespace std;
long long arr[401][401];
int main(){
    int n,k;
    cin >> n >> k;

    for(int j= 1; j <= k; j++){
        arr[j][0] = 1;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= k; j++){
            if(j==1) arr[1][i] = 1;
            arr[j][i] = (arr[j-1][i] + arr[j][i-1])%1000000000;
        }
    }

    cout << arr[k][n]<<endl;
}
