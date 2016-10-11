#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main(){
    int n;
    queue<int> que;
    cin >> n;

    while(n--){
        string str;
        int num;
        cin>>str;
        if(str == "push"){
            cin >> num;
            que.push(num);
        }else if (str == "pop"){
            if(que.empty()==true)
                cout << "-1" << endl;
            else {
                cout << que.front() << endl;
                que.pop();
            }
        }else if ( str == "size"){
            cout << que.size() << endl;
        }else if ( str == "empty"){
            if(que.empty()==true)
                cout << "1" << endl;
            else 
                cout << "0" << endl;
        }else if ( str == "front"){
            if(que.empty()==true)
                cout << "-1" << endl;
            else 
                cout << que.front() << endl;
        }else if ( str == "back"){
            if(que.empty()==true)
                cout << "-1" << endl;
            else 
                cout << que.back() << endl;
        }
    }
    return 0;
}
