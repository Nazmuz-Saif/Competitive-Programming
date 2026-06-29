#include <stdio.h>
#include <string.h>
int main()
{
    char arr[101];
    int count=0;
    gets(arr);
    for(int i=0; i<strlen(arr); i++){
        if(arr[i]==arr[i+1]){
            count++;
            if(count>=6){
                break;
            }
        }
        else{
            count=0;
        }
    }
    if(count>=6){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
