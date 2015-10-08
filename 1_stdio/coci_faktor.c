#include <stdio.h>

int main(){
    int impact, article, citation;
    scanf("%d%d",&article,&citation);
    printf("%d\n",article*(citation-1)+1);
}
