#include <stdio.h>
int main()
{
    int i;
    float p1[3],p2[3];
    for(i=0;i<3;i++){
        scanf("%f", &p1[i]);
    }
    for(i=0;i<3;i++){
        scanf("%f", &p2[i]);
    }
    printf("VALOR A PAGAR: R$ %.2f\n", p1[1]*p1[2]+p2[1]*p2[2]);

    return 0;
}
