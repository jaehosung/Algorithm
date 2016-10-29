#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        int ans =0;
        cin >> n;

        int check[1001] = {0,};
        vector<int> grp[1001];

        for(int i = 1; i <=n ; i ++){
            int temp;
            cin >> temp;
            grp[i].push_back(temp);
        }

        for(int i=1; i <=n; i++){
            if(check[i]==0){
                queue<int> que;
                check[i] = 1;
                que.push(grp[i][0]);

                while(!que.empty()){
                    int temp = que.front();
                    que.pop();
                    check[temp] = 1;
                    if(check[grp[temp][0]]==0){
                        que.push(grp[temp][0]);
                    }
                }

                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
