#include<iostream>
#include<vector>
using namespace std;

int table[100001][2];

int main(){
    int n;
    cin >> n;
    vector<int> str(n+1);
    for(int i = 1; i <= n; i++){
        cin >> str[i];
    }

    table[0][0] = 0;
    table[0][1] = 0;
    table[1][0] = str[0];
    table[1][1] = 0;

    for(int i = 1; i <= n; i++){
        table[i][0] = max(table[i-2][0],table[i-2][1])+str[i];
        table[i][1] = table[i-1][0] + str[i];
    }

    cout << max(table[n][0], table[n][1]);



    return 0;
}
