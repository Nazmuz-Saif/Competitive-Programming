#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,r,c,ans,arr[5][5];
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(arr[i][j]==1){
                r = i+1;
                c = j+1;
                break;
            }
        }
    }
    ans = abs(3-r) + abs(3-c);
    printf("%d", ans);
    return 0;
}
