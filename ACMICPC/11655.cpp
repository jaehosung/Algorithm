#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    for(int i=0; i<s.size(); i++){
        if(s[i]>='a'&&s[i]<='z'){
            if(s[i]>='n'){
                s[i]-=26;
                s[i]+=13;
            }else
                s[i]+=13;
        }else if(s[i]>='A'&&s[i]<='Z'){
            s[i]+=13;
            if(s[i]>'Z'){
                s[i]-=26;
            }
        }
    }
    cout << s;

    return 0;
}
