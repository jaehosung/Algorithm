#include<iostream>
#include<string>
#include<deque>
using namespace std;

int main(){
    int n;
    deque<int> que;
    cin >> n;

    while(n--){
        string str;
        int num;
        cin>>str;
        if(str == "push_front"){
            cin >> num;
            que.push_front(num);
        }else if(str == "push_back"){
            cin >> num;
            que.push_back(num);
        }else if (str == "pop_front"){
            if(que.empty()==true)
                cout << "-1" << endl;
            else {
                cout << que.front() << endl;
                que.pop_front();
            }
        }else if (str == "pop_back"){
            if(que.empty()==true)
                cout << "-1" << endl;
            else {
                cout << que.back() << endl;
                que.pop_back();
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
