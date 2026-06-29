#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d%*c", &t);
    while(t--){
        char a[101];
        gets(a);
        int len = strlen(a);
        if(len>10){
            printf("%c", a[0]);
            printf("%d", len-2);
            printf("%c\n", a[len-1]);
        }
        else{
            printf("%s\n", a);
        }
    }
    return 0;
}
