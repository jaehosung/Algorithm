#include<iostream>
using namespace std;
int grp[100001];
int check[100001];
int step[100001];

int teamNumber(int i){
    int x = i;
    int cnt = 1;
    while(1){
        
        cnt ++;
    }
}



int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        int ans = 0;
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> grp[i];
            check[i] = 0;
            step[i] = 0;
        }
        for(int i = 1; i <=n; i++){
            ans += teamNumber(i);
        }
    }
    return 0;
}
