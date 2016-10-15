#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n+1);
    for(int i = 1; i <= n; i++){
        cin>>a[i];
    }

    vector<int> price(n+1);

    for(int i =1; i <= n; i++){
        for(int j=1; j<=i; j++){
            price[i] = max(price[i],(price[i-j]+a[j]));
        }
    }

    cout<<price[n]<<endl;
    return 0;
}
