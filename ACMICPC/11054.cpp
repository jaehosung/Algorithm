#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> vec(n+1);
    vector<int> num(n+1);
    vector<int> num2(n+1);



    for(int i = 1; i <= n; i++){
        cin >> vec[i];
    }

    num[1] = 1;
    num2[n] = 1;

    for(int i = 2; i <=n; i++){
        int temp = 1;
        for(int j = 1; j < i; j++){
            if(vec[j] < vec[i]&& temp <=num[j]){
                temp = num[j]+1;
            }
        }
        num[i] = temp;
    }
    
    for(int i = n-1; i >=1 ; i--){
        int temp = 1;
        for(int j = n; j > i; j--){
            if(vec[j] < vec[i]&& temp <=num2[j]){
                temp = num2[j]+1;
            }
        }
        num2[i] = temp;
    }

    for(int i = 1; i <= n; i++){
        num[i] += num2[i]-1;
    }

    cout << *max_element(num.begin(),num.end());

    return 0;
}
