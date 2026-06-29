#include <stdio.h>
#include <string.h>
int main()
{
    int n,counta=0,countd=0;
    scanf("%d%*c", &n);
    char arr[n+1];
    gets(arr);
    for(int i=0; i<strlen(arr); i++){
        if(arr[i]=='A'){
            counta++;
        }
        else{
            countd++;
        }
    }
    if(counta>countd){
        printf("Anton");
    }
    else if(counta<countd){
        printf("Danik");
    }
    else{
        printf("Friendship");
    }
    return 0;
}
