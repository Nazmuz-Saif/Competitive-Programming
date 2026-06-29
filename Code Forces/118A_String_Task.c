#include <stdio.h>
#include <string.h>
int main()
{
    char arr[101];
    gets(arr);
    strlwr(arr);
    for(int i=0; i<strlen(arr); i++){
        if(arr[i]=='a' ||arr[i]=='e' ||arr[i]=='i' ||arr[i]=='o' ||arr[i]=='u' ||arr[i]=='y'){
            continue;
        }
        else{
            printf(".%c", arr[i]);
        }
    }
    return 0;
}
