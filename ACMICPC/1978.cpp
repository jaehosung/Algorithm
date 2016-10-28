#include<iostream>
using namespace std;

bool primetest(int num){
    if(num<2)
        return false;
    for(int i = 2; i*i <= num; i++){
        if(num%i == 0)
            return false;
    }
    return true;
}

int main(){
    int n;
    int ans = 0;
    cin >> n;
    while(n--){
        int temp;
        cin >> temp;
        if(primetest(temp) == true)
            ans ++;
    }

    cout << ans;
    return 0;
}
