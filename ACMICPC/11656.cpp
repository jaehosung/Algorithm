#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

string str;

bool myfunction(int i,int j){
    return strcmp(str.c_str()+i,str.c_str()+j)<0;
}

int main(){
    cin >> str;
    vector<int> vec;
    for(int i=0; i <str.size(); i++){
        vec.push_back(i);
    }
    sort(vec.begin(),vec.end(),myfunction);

    for(int i=0; i <str.size(); i++){
        cout << str.c_str()+vec[i]<<endl;
    }

    return 0;
}
