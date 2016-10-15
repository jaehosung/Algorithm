#include<iostream>
#include<cmath>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n+1);
    for(int i = 1; i <= n; i++){
        int temp = INT_MAX;
        for(int j = 1; j*j<=i; j++){
            if(arr[i-j*j] + 1 < temp)
                temp  = arr[i-j*j]+1;
        }
        arr[i] = temp;
    }

    cout << arr[n];

    return 0;
}
