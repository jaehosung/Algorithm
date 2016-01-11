#include<iostream>
using namespace std;
int main(){
    int i,j,k,l;
    int n;
    int count=0;
    cin>>n;
    for(i=1;i<=3;i++){
        for(j=1;j<=3;j++){
            for(k=1;k<=3;k++){
                for(l=1;l<=3;l++){
                    if((l*1000+i*100+j*10+k)%n==0)count++;
                }
            }
        }
    }
    cout<<count;
    return 0;
}
