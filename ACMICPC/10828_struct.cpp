#include<iostream>
using namespace std;

struct Stack{
    int stk[10000];
    int size;
    Stack(){
        size = 0;
    }
    void push(int n){
        stk[size] = n;
        size++;
    }
    int empty(){
        if(size == 0){
            return 1;
        }
        else{
            return 0;
        }
    }
    int pop(){
        if(empty() == 1){
            return -1;
        }else{
            size--;
            return stk[size];
        }
    }
    int top(){
        if(empty() == 1){
            return -1;
        }else{
            return stk[size-1];
        }
    }
};

int main(){
    int n;
    cin >> n;
    Stack s;
    while(n--){
        string str;
        cin >> str;
        if(str == "push"){
            int k;
            cin >> k;
            s.push(k);
        }else if(str == "pop"){
            cout << s.pop() << endl;
        }else if(str == "size"){
            cout << s.size << endl;
        }else if(str == "empty"){
            cout << s.empty() << endl;
        }else if(str == "top"){
            cout << s.top() << endl;
        }
    }
    return 0;
}
