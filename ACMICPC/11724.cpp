#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int> gra[1001];
queue<int> que;
bool dcheck[1001];


void dfs(int a){
    dcheck[a] = true;
    for(int i = 0; i<gra[a].size(); i++){
        if(dcheck[gra[a][i]] == false){
            dfs(gra[a][i]);
        }
    }
}

int main(){
    int n,edge,start;
    int ans =0;
    cin >> n >> edge;

    for(int i = 0; i < edge; i++){
        int s1,s2;
        cin >> s1 >> s2;
        gra[s1].push_back(s2);
        gra[s2].push_back(s1);
    }
    for(int i=1; i <=n; i++){
        if(dcheck[i] == false){
            dfs(i);
            ans ++;
        }
    }

    cout << ans;

    return 0;
}
