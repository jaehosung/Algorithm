#include<cstdio>
#include<stack>
#include<string>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    stack<int> first;
    while(n--){
        char toString[10];
        scanf("%s",toString);
        string s(toString);
        if(s=="push"){
            int pushVal;
            scanf("%d",&pushVal);
            first.push(pushVal);
        }else if(s=="pop"){
            if(first.empty()){
                printf("-1\n");
            }else{
                int topVal = first.top();
                first.pop();
                printf("%d\n",topVal);
            }
        }else if(s=="size"){
            printf("%lu\n",first.size());
        }else if(s=="empty"){
            printf("%d\n",first.empty());
        }else if(s=="top"){
            if(first.empty()){
                printf("-1\n");
            }else{
                printf("%d\n",first.top());
            }
        }
    }

    return 0;
}
