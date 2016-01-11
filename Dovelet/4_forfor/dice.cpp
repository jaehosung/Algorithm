#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=1; i<=6; i++)
    {
        if(n-i<=6&&n-i>=1){
            cout << i <<" "<< n-i << endl;
        }
    }
    return 0;
}
