#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    for(int i=n; i>=1; i--){
        for(int j=i;j<n;j++)
            cout<<" ";
        for(int j=i;j>=1; j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}