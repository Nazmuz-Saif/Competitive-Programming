#include <stdio.h>
int main()
{
    int n,count1=0, count2=0, count3=0;
    scanf("%d", &n);
    int arr[n][3];
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            count1 = count1 + arr[i][0];
            count2 = count2 + arr[i][1];
            count3 = count3 + arr[i][2];
        }
    }
    if(count1 == 0 && count2 == 0 && count3 == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
