#include<iostream>
using namespace std;
int main(){
    int tc;
    cin >> tc;
    while(tc--){
    int a,b;
    cin >> a >> b;
    int x = a, y = b,c;
    while(y!=0){
        c = x%y;
        x = y;
        y = c;
    }
        cout << a*b/x<<endl;
    }
}
