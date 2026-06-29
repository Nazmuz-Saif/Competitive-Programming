#include <stdio.h>
int main()
{
    int n, count=0;
    scanf("%d%*c", &n);
    char arr[n];
    gets(arr);
    for(int i=0; i<n; i++){
        if(arr[i]==arr[i+1]){
            count++;
        }

    }
    printf("%d", count);
    return 0;
}
