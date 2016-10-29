#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
vector<int> gra[1001];
queue<int> que;
bool bcheck[1001];
bool dcheck[1001];


void dfs(int a){
    cout << a << " ";
    dcheck[a] = true;
    for(int i = 0; i<gra[a].size(); i++){
        if(dcheck[gra[a][i]] == false){
            dfs(gra[a][i]);
        }
    }
}

void bfs(int start){
    que.push(start);
    bcheck[start] = true;
    while(que.empty() != true){
        int a = que.front();
        que.pop();
        cout << a<< " ";
        for(int i = 0; i < gra[a].size(); i++){
            if(bcheck[gra[a][i]] == false){
                que.push(gra[a][i]);
                bcheck[gra[a][i]] = true;
            }
        }
    }
}

int main(){
    int n,edge,start;
    cin >> n >> edge >> start;

    for(int i = 0; i < edge; i++){
        int s1,s2;
        cin >> s1 >> s2;
        gra[s1].push_back(s2);
        gra[s2].push_back(s1);
    }
    //sorting is needed

    for(int i = 1; i <=n; i++){
        sort(gra[i].begin(),gra[i].end());
    }



    dfs(start);
    cout << '\n';
    bfs(start);

    return 0;
}
