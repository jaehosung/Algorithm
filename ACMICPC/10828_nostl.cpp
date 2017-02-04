#include<iostream>
#include<string>
using namespace std;
int top = 0;
int stk[10000];

void push(int n){
    stk[top] = n;
    top++;
}
void pop(){
    if(top == 0){
        cout << "-1" << endl;
    }else {
        cout << stk[top-1] << endl;
        top --;
    }
}

void size(){
    cout << top << endl;
}

void ftop(){
    if(top == 0){
        cout << "-1" << endl;
    }else {
        cout << stk[top-1] << endl;
    }
}

void empty(){
    if(top == 0){
        cout << "1" << endl;
    }else{
        cout << "0" << endl;
    }
}


int main(){
    int n;
    cin >> n;
    while(n--){
        string str;
        cin >> str;
        if(str == "push"){
            int k;
            cin >> k;
            push(k);
        }else if(str == "pop"){
            pop();
        }else if(str == "size"){
            size();
        }else if(str == "empty"){
            empty();
        }else if(str == "top"){
            ftop();
        }
    }
    return 0;
}
