#include <stdio.h>
int main()
{
    int n,h, ans=0;
    scanf("%d%d", &n, &h);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i]<=h){
            ans++;
        }
        else{
            ans += 2;
        }
    }
    printf("%d", ans);
    return 0;
}

