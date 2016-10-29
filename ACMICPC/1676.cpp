#include<iostream>
#include<cmath>
using namespace std;
int arr[501] = {0,};

int main(){
    int n;
    int ans = 0;
    cin >> n;
    for(int i = 1; pow(5,i) <= n; i++){ 
        for(int j = pow(5,i); j <= n; j+=pow(5,i)){ 
            arr[j] ++;
        }
    }
    for(int i = 1; i<= n; i++){ 
        ans += arr[i];
    }
    cout<<ans;

    return 0;
}
