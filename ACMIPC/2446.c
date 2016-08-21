#include<stdio.h>
int main(){
    int n;
    int i,j;
    scanf("%d",&n);
    for(i=n-1;i>=0;i--)
    {
        for(j=i;j<n-1;j++){
            printf(" ");
        }
        for(j=0;j<=2*i;j++){
            printf("*");
        }
        printf("\n");
    }

    for(i=1;i<n;i++)
    {
        for(j=i;j<n-1;j++){
            printf(" ");
        }
        for(j=0;j<=2*i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
