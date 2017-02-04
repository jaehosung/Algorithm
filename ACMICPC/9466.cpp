#include<iostream>
#include<vector>
using namespace std;
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        int ans = 0;
        cin >> n;

        vector<int> grp(n+1);
        vector<int> check(n+1);
        vector<int> team;


        for(int i = 1; i <= n; i++){
            cin >> grp[i];
        }

        for(int i = 1; i <= n; i++){
            team.clear();
            if(check[i]!=-1){
                int next = grp[i];
                check[i] = i;
                team.push_back(i);
                while(check[next]!=-1&&check[next]!=i&&check[next]!=-2){
                    team.push_back(next);
                    check[next] = i;
                    next = grp[next];
                }
                if(next == i){
                    while(!team.empty()){
                        int temp = team.back();
                        check[temp] = -1;
                        team.pop_back();
                    }
                }
            }
        }
        
        for(int i = 1; i <= n; i++){
            if(check[i] != -1)
                ans ++;
        }
        cout << ans << endl;
    }
    return 0;
}
