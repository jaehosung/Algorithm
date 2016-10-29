#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int check[20001] = {0,};

bool detectBfs(int start, vector<int> *grp){
    queue<int> que1;
    check[start] = 1;
    que1.push(start);
    int stat = 1;
    while(!que1.empty()){
        while(!que1.empty()){
            int t = que1.front();
            que1.pop();
            for(int i = 0; i < grp[t].size(); i++){
                int node = grp[t][i];
                if(check[node]==0){
                    check[node] = -1;
                    quem1.push(node);
                }else if(check[node] ==1){
                    return false;
                }
            }
        }
        while(!quem1.empty()){
            int t = quem1.front();
            quem1.pop();
            for(int i = 0; i < grp[t].size(); i++){
                int node = grp[t][i];
                if(check[node]==0){
                    check[node] = 1;
                    que1.push(node);
                }else if(check[node] ==-1){
                    return false;
                }
            }
        }
    }
    return true;
}

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n,edge;
        vector<int> grp[20001];
        cin >> n >> edge;

        //initiatlizing check array;
        for(int i = 1; i <= n; i++){
            check[i] = 0;
        }

        for(int i = 0;i < edge; i++){
            int s1,s2;
            cin >> s1 >> s2;
            grp[s1].push_back(s2);
            grp[s2].push_back(s1);
        }

        int ans = 0;
        for(int i=1; i <= n; i++){
            if(check[i] == 0){
                if(detectBfs(i,grp) == false){
                    ans ++;
                }
            }
        }
        if(ans == 0){
            cout << "YES"<<endl;
        }else{
            cout << "NO"<<endl;
        }

    }
    return 0;
}
