#include<iostream>
#include<string>
using namespace std;

int main(){
    string a,b,c,d;
    cin>>a>>b>>c>>d;
    a = a+b;
    c = c+d;
    long long num = stoll(a)+stoll(c);
    cout<<num;
    for(char s : a){};
    return 0;
}
