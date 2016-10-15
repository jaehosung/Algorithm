#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n+1);
    vector<int> sum(n+1);


    for(int i = 1; i <= n; i++){
        cin >> vec[i];
    }

    sum[1] = vec[1];

    for(int i = 2; i <= n; i++){
        sum[i] = max((sum[i-1] + vec[i]),vec[i]);
    }

    cout << *max_element(sum.begin()+1,sum.end()) << endl;

    return 0;
}
