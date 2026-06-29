#include <stdio.h>
int main()
{
    int k,w,n,tc=0;
    scanf("%d%d%d", &k, &w, &n);
    for(int i=1; i<=n; i++){
        tc= tc+k*i;
    }
    if(tc>w){
        printf("%d", tc-w);
    }
    else{
        printf("0");
    }

    return 0;
}
