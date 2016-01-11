#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for( int i=1; 2*i+1<=n; i++){
        cout<<"*";
        for( int j=1; j+2<=n;j++){
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
 
    for( int i=1; i<=n; i++)
        cout<<"*";
    cout<<endl;
    for( int i=1; 2*i+1<=n; i++){
        cout<<"*";
        for( int j=1; j+2<=n;j++){
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
 
    return 0;
}
