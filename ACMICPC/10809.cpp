#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    
    string s;
    cin >> s;

    for(int i = 'a'; i <= 'z'; i++){

        string::iterator itr = find(s.begin(),s.end(),i);

        if(s.end()==itr)
            cout<<-1;
        else
            cout<<itr-s.begin();

        cout << ' ';
    }

    return 0;
}
