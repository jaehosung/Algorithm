#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    int start=0;
    cin >> str;
    if(str.size()%3 == 1){
        cout << (str[0]-'0');
        start = 1;
    }else if(str.size()%3 == 2){
        cout << (str[0]-'0')*2 + (str[1]-'0');
        start = 2;
    }
    for(int i = start; i< str.size(); i=i+3){
        cout << (str[i]-'0')*4 + (str[i+1]-'0')*2 + (str[i+2]-'0');
    }
    return 0;
}
