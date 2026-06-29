#include <stdio.h>
#include <string.h>
int main()
{
    char arr[101];
    gets(arr);
    int i,j,temp;
    for(i=0; i<strlen(arr)-1; i++){
        for(j=i+2; j<strlen(arr); j=j+2){

            if(arr[i]=='+'){
                continue;
            }
            else if(arr[i]>='0' && arr[i]<='9'){
                if(arr[i]>arr[j]){
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
    puts(arr);
    return 0;
}
