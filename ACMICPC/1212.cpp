#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++){
        int temp = str[i]-'0';
        if(i==0){
            if(temp/4!=0){
                cout << temp/4;
                cout << (temp%4)/2;
            }else{
                if((temp%4/2)!=0)
                    cout << (temp%4)/2;
            }
            cout << (temp%2);
        }else{
            cout << temp/4;
            cout << (temp%4)/2;
            cout << (temp%2);
        }
     }
    return 0;
}
