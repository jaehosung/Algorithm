#include<iostream>
#include<cmath>
using namespace std;

void go(int n,int dig){
    if(n==0){
        return;
    }
    go(n/dig, dig);
    cout << n%dig << " ";
}
int main(){
    int a,b;
    int digit;
    int decinum=0;
    cin >> a >> b; //a : previous decimal b : next
    cin >> digit;
    for(int i = digit; i >0; i--){
        int temp;
        cin >> temp;
        decinum += pow(a,i-1) * temp;
    }

    if(decinum == 0){
        cout << 0 << endl;
    }else{
        go(decinum,b);
    }
    return 0;
}
