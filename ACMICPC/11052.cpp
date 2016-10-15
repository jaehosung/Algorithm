#include<iostream>
using namespace std;
int price[1001]={0,};
int a[1001];


int main(){
    int n;
    int i;
    cin >> n;
    for(int i = 1; i <=n; i++){
        cin >> a[i];
    }

    for(int i = 1; i <=n; i++){
        for(int j = 1; j <=n; j++){
            if(i-j>=0 && price[i-j] + a[j]>price[i])
                price[i] = price[i-j] + a[j];
        }
    }
    cout<<price[n];

    return 0;
}
