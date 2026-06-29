#include <stdio.h>
int main()
{
    char a[80];
    gets(a);
    double s,b;
    scanf("%lf%lf", &s,&b);
    printf("TOTAL = R$ %.2lf\n", s+(b*0.15));

    return 0;

}
