#include<iostream>
using namespace std;

struct Stack{
    int iSTK[100000];
    int lSTK[100000];
    int top;
    int max;

    Stack(){
        top = 0;
        max = 0;
    }

    void push(int i, int l){
        iSTK[top] = i;
        lSTK[top] = l;
        top ++;
    }

    bool empty(){
        if(top == 0){
            return true;
        }else{
            return false;
        }
    }
    void pop(){
        if(!empty()){
            top--;
        }
    }
    void calfun(int i, int l){
        if(empty()){
            push(i,l);
        }else if(lSTK[top-1] < l){
            push(i,l);
        }else if(lSTK[top-1] > l){
            while(lSTK[top-1] > l){
                int height = lSTK[top-1];
                int length = i-iSTK[top-1];

                maxcomp(height * length);
                pop();
                if((top==1)||lSTK[top-2] < l){
                    lSTK[top-1] = l;
                    break;
                }else if(lSTK[top-2] == l)
                    break;

                /*
                int height = lSTK[top-1];
                int length = i-iSTK[top-1];
                maxcomp(height * length);
                pop();
                if(lSTK[top] == l){
                    break;
                }else if(lSTK[top] < l){
                    push(i,l);
                }
                */
            }
        }
    }

    void maxcomp(int n){
        if(max < n){
            max = n;
        }
    }

    void initializing(){
        max = 0;
        top = 0;
    }

};

int main(){
    Stack s;
    while(1){
        int n;
        cin >> n;
        if(n == 0){
            break;
        }
        for(int i = 0 ; i < n; i++){
            int temp;
            cin >> temp;
            s.calfun(i,temp);
            cout << "top: " << s.top <<"max :" << s.max<< endl;
            for(int j = 0; j < s.top; j++){
                cout<< s.iSTK[j] << " ";
            }
            cout << endl;
            for(int j = 0; j < s.top; j++){
                cout<< s.lSTK[j] << " ";
            }
            cout << endl;
        }
        while(!s.empty()){
            s.maxcomp((s.lSTK[s.top]) * (n-s.iSTK[s.top]));
            s.pop();
        }
        cout << s.max << endl;
        s.initializing();
    }
    return 0;
}
