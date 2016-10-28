#include<iostream>
#include<string>
using namespace std;

int chartoint(char a){
    if(a>='A'){
        return (int)a-'A'+10;
    }else{
        return (int)a - '1' + 1;
    }
}
int main(){
    int dig;
    int pow=1;
    int num = 0;
    string str;
    cin >>str >> dig;


    for( int i = str.size()-1; i >= 0; i--){
        num += pow * chartoint(str[i]);
        pow *= dig;
    }
    cout << num;

    return 0;
}
