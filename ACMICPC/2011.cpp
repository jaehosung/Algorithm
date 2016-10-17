#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string code;
    cin >> code;
    int n = code.size();
    vector<int> vec(n+1);
    vec[0] = 1;
    vec[1] = 1;

    for(int i = 2; i <=n; i++){
        if(stoi(code.substr(i-2,2))%10==0){
            vec[i] = vec[i-2];
        }else if(stoi(code.substr(i-2,2))<=26&&stoi(code.substr(i-2,2))>=10){
            vec[i] = vec[i-2] + vec[i-1];
        }else{
            vec[i] = vec[i-1];
        }
        vec[i] %= 1000000;
    }

    cout << vec[n]<<endl;
    return 0;
}
