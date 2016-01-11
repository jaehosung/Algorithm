#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a%2==0&&b%2==0) printf("even+even=even\neven*even=even");
    else if(a%2==0) printf("even+odd=odd\neven*odd=even");
    else if(b%2==0) printf("odd+even=odd\nodd*even=even");
    else printf("odd+odd=even\nodd*odd=odd");

    return 0;
}
