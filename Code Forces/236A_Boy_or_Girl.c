#include <stdio.h>
#include <string.h>
int main()
{
    char arr[101];
    gets(arr);
    int i, j, count=0;

    for(i=0; i<strlen(arr); i++){
        int flag=0;
        for(j=0; j<i; j++){
            if(arr[i]==arr[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            count++;
        }
    }
    if(count%2==0){
        printf("CHAT WITH HER!");
    }
    else{
        printf("IGNORE HIM!");
    }

    return 0;
}
