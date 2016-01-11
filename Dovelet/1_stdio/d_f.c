#include<stdio.h>
#include<math.h>

int main(){
    float n;
    scanf("%f",&n);
    printf("%d %.2f",(int)floor(n),n-floor(n));
    return 0;
}
