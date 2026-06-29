#include<stdio.h>
#include <string.h>
int main()
{
    char arr[101];
    gets(arr);
    int countl=0,countu=0;
    for(int i=0; i<strlen(arr); i++){
        if(arr[i]>='A' && arr[i]<= 'Z'){
            countu++;
        }
        else{
            countl++;
        }
    }
    if(countl>=countu){
        strlwr(arr);
    }
    else{
        strupr(arr);
    }
    puts(arr);
    return 0;
}