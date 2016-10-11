#include<cstdio>
#include<stack>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        stack<char> stk;
        char input[51];
        int flag=0;
        int i=0;

        scanf("%s",input);

        while(input[i]!='\0'){
            if(input[i] == '('){
                stk.push(input[i]);
            }else{
                if(!stk.empty()){
                    stk.pop();
                }else{
                    flag = 1;
                    break;
                }
            }
            i++;
        }

        if(flag==0&&stk.empty()){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}
