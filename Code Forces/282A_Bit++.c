#include <stdio.h>
#include <string.h>
int main()
{
    int n,count=0;
    scanf("%d%*c", &n);
    for(int i=0; i<n; i++){
        char s[4];
        gets(s);
        if((s[0]=='+' && s[1]=='+') || (s[1]=='+' && s[2]=='+')){
            count++;
        }
        else if((s[0]=='-' && s[1]=='-') || (s[1]=='-' && s[2]=='-')){
            count--;
        }
    }
    printf("%d", count);
    return 0;
}
