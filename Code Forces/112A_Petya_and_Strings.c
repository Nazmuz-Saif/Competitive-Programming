#include <stdio.h>
#include <string.h>
int main()
{
    char arr1[101], arr2[101];
    gets(arr1);
    gets(arr2);
    strlwr(arr1);
    strlwr(arr2);
    int flag=0;

    for(int i=0; i<strlen(arr1); i++){
        if(arr1[i]>arr2[i]){
            printf("1");
            break;
        }
        else if(arr1[i]<arr2[i]){
            printf("-1");
            break;
        }
        else{
            flag++;
            continue;
        }
    }
    if(flag==strlen(arr1)){
        printf("0");
    }
    return 0;
}
