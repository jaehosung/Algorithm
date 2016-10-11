#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.size();
    int ans =0;
    stack<int> stk;
    for(int i=0; i <n; i++){
        if(s[i] == '('){
            stk.push(i);
        }else{
            if(i == stk.top()+1){
                stk.pop();
                ans += stk.size();
            }else{
                stk.pop();
                ans ++;
            }
        }
    }
    cout << ans << endl;
}
