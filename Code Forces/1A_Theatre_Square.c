#include <stdio.h>
#include <math.h>
int main()
{
    long long int n,m,a;
    long long int ans;
    scanf("%lld%lld%lld", &n, &m, &a);
    ans = ceil((double)n/a) * ceil((double)m/a);
    printf("%lld", ans);
    return 0;
}
