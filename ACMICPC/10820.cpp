#include<iostream>
#include<string>
using namespace std;
int main(){
    
    string s;
    while(getline(cin,s)){
        int low=0,up=0,num=0,space=0;

        for(int i=0; i<s.size();i++){
            char a = s[i];
            if( a >= 'a' && a <= 'z'){
                low++;
            }else if( a >= 'A' && a <= 'Z'){
                up++;
            }else if( a >= '0' && a <= '9'){
                num++;
            }else if( a ==' '){
                space++;
            }
        }
        cout<<low<<' '<<up<<' '<<num<<' '<<space<<endl;
    }
    return 0;
}
