#include <stdio.h>
int main()
{
    int n,h;
    float ph;
    scanf("%d%d%f", &n, &h, &ph);
    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2f\n", h*ph);

    return 0;
}

