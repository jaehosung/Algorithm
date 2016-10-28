#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main(){
    long long n;
    long long exp;
    vector<int> ans;
    cin >> n;
    if(n==0){
        cout << 0;
    }

    for(int i = 0; pow(2,i-1) < abs(n); i ++){
        if(n%((long long)pow(2,i+1))==0){
            ans.push_back(0);
        }else{
            ans.push_back(1);
            if(i%2 != 0){
                n += pow(2,i);
            }else{
                n -= pow(2,i);
            }
            if(n==0){
                break;
            }
        }
    }

    for(int i = 0; i < ans.size(); i ++){
        cout << ans[ans.size()-1-i];
    }
    return 0;
}
