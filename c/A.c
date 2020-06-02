#include "stdio.h"

int main(){
    int nump;
    int n;
    scanf("%d",&nump);
    while(scanf("%d", &n) != EOF){
        printf("%d\n",n%nump);
    }
    return 0;
}