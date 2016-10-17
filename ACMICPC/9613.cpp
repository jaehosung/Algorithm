#include<iostream>
using namespace std;
int gcd(int x, int y){
    if(y==0){
        return x;
    }else{
        return gcd(y,x%y);
    }
}
int arr[101];
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        int sum = 0;
        cin >> n;
        for(int i = 1; i <=n; i ++){
            cin >> arr[i];
        }
        for(int i = 1; i <=n-1; i++){
            for(int j = i+1; j <=n; j++){
                sum += gcd(arr[i],arr[j]);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
