#include<iostream>
using namespace std;

int arr[1001];
int num[1001];

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    num[1] = 1;

    for(int i = 1; i <= n; i++){
        int temp=1;
        for(int j = 1; j <i; j++){
            if(arr[j]<arr[i])
                if(temp <= num[j]){
                    temp = num[j] + 1;
                }
        }
        num[i] = temp;
    }

    int ans = 0;

    for(int i = 1; i <= n; i++){
        if(ans < num[i])
            ans = num[i];
    }

    cout << ans << endl;

    return 0;
}
