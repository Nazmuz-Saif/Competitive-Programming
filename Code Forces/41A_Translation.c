#include <stdio.h>
#include <string.h>
int main()
{
    char s[101], t[101];
    gets(s);
    gets(t);
    if(strcmp(strrev(s),t)==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
