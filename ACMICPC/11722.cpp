#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> vec(n+1);
    vector<int> num(n+1);

    for(int i = 1; i <= n; i++){
        cin >> vec[i];
    }

    num[1] = 1;

    for(int i = 2; i <=n; i++){
        int temp = 1;
        for(int j = 1; j < i; j++){
            if(vec[j] > vec[i]&& temp <=num[j]){
                temp = num[j]+1;
            }
        }
        num[i] = temp;
    }
    
    cout << *max_element(num.begin(),num.end())<<endl;

    return 0;
}
