#include<iostream>
using namespace std;
int post[1000001][2];
int price[1000001][3];
// "0 : none remove" "1 : 0 remove" "2 : 1 remove"

int main(){
    int tc;
    cin >> tc;
    while (tc--){
        int n;
        cin >> n;
        for(int i = 1; i <=n; i++){
            cin >> post[i][0];
        }
        for(int i = 1; i <=n; i++){
            cin >> post[i][1];
        }

        price[1][0] = 0;
        price[1][1] = post[1][0];
        price[1][2] = post[1][1];

        for(int i = 2; i <=n; i++){
            price[i][0] = max(price[i-1][0],max(price[i-1][1],price[i-1][2]));
            price[i][1] = max(price[i-1][0],price[i-1][2]) + post[i][0];
            price[i][2] = max(price[i-1][0],price[i-1][1])+post[i][1];
        }
        cout << max(price[n][0],max(price[n][1],price[n][2]))<<endl;

    }

    return 0;
}
