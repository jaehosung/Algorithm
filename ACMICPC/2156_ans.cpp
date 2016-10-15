#include<iostream>
using namespace std;

int wine[10001];
int price[10001];

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> wine[i];
    }
    price[0] = 0;
    price[1] = wine[1];
    price[2] = price[1] + wine[2];

    for(int i = 3; i <=n; i++){
        price[i] = price[i-1];
        if(price[i] < price[i-2] + wine[i])
            price[i] = price[i-2] + wine[i];

        if(price[i] < price[i-3] + wine[i] + wine[i-1])
            price[i] = price[i-3] + wine[i] + wine[i-1];
    }

    cout << price[n];
    return 0;
}
