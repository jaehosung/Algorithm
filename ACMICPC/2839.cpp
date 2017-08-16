#include<iostream>
using namespace std;

int arr[5010] = {0};

int main(){
    int n;
    cin >> n;
    arr[3] = 1;
    arr[5] = 1;

    for(int i = 0; i <= n; i++){
        if(arr[i]!=0){
            int temp = arr[i];
            if(temp+1<arr[i+3]||arr[i+3] == 0)
                arr[i+3]=temp+1;

            if(temp+1<arr[i+5]||arr[i+5] == 0)
                arr[i+5]=temp+1;
        }
    }
    if(arr[n] == 0)
        cout << -1;
    else
        cout << arr[n];

    return 0;
}
