#include <stdio.h>
#include <math.h>
int main()
{
    int m,n,ans;
    scanf("%d%d", &m,&n);
    ans = ceil(m*n/2);
    printf("%d", ans);
    return 0;
}
