#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n/2+1);

    vec[1] = 3;
    for(int i = 2; i <= n/2; i++){
        int temp = vec[i-1]*3;
        for(int j = 1; j < i-1; j++){
            temp += vec[j]*2;
        }
        temp += 2; // full shape
        vec[i] = temp;
    }

    if(n%2!=0){
        cout<<"0";
    }else{
        cout<<vec[n/2];
    }

    return 0;
}
