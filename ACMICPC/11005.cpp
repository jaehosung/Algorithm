#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main(){
    int num, dig;
    vector<int> vec;
    cin >> num >> dig;
    do{
        vec.push_back(num%dig);
        num = num/dig;
    }while(num!=0);

    for(int i = vec.size()-1; i>=0; i--){
        if(vec[i]<=9)
            cout<<vec[i];
        else
            printf("%c",vec[i]+55);
    }
    return 0;
}

