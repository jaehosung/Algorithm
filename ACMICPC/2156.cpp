#include<iostream>
using namespace std;
int arr[10001][3];
int wine[10001];
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> wine[i];
    }
    
    arr[1][0] = 0;
    arr[1][1] = wine[1];
    arr[1][2] = wine[1];

    for(int i = 2; i <= n; i++){
        arr[i][0] = max(arr[i-1][0],max(arr[i-1][1],arr[i-1][2]));
        arr[i][1] = arr[i-1][0] + wine[i];
        arr[i][2] = arr[i-1][1] + wine[i];
    }

    cout << max(arr[n][0], max(arr[n][1],arr[n][2]))<<endl;

    return 0;
}
