#include<cstdio>
#include<string>
using namespace std;

struct Stack{
    int stack[10000];
    int size;

    Stack(){
        size =0;
    }

    void push(int x){
        stack[size]=x;
        size++;
    }

    int pop(){
        if(size>0)
            return stack[--size];
        else
            return -1;
    }

    int top(){
        if(size == 0)
            return -1;
        else 
            return stack[size-1];
    }

    int sizefunc(){
        if(size<0)
            return 0;
        else
            return (size);
    }

    int empty(){
        if(size==0)
            return 1;
        else
            return 0;
    }

};

int main(){
    int n;
    scanf("%d",&n);
    Stack stk;
    while(n--){

        char s[10];
        scanf("%s",s);
        string str(s);
        if(str == "push"){
            int n;
            scanf("%d",&n);
            stk.push(n);
        }else if(str == "pop"){
            printf("%d\n",stk.pop());
        }else if(str == "top"){
            printf("%d\n",stk.top());
        }else if(str == "size"){
            printf("%d\n",stk.sizefunc());
        }else if(str == "empty"){
            printf("%d\n",stk.empty());
        }

    }
        return 0;
}
