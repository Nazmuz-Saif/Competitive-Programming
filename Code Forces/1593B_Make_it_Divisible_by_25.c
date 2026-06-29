#include <stdio.h>
int main()
{
    long long int t;
    scanf("%lld", &t);
    while(t--){
        long long int n, count=0,k=10, y=100;
        scanf("%lld", &n);
        while(n>=25){
            if(n%k==0){
                while(n>25){
                    if(n%y==5 || n%y==0){
                        break;
                    }
                    else{
                        y *= 10;
                        count++;
                    }
                }
            }
            else if(n%k==5){
                while(n>25){
                    if(n%y==2 || n%y==7){
                        break;
                    }
                    else{
                        y *= 10;
                        count++;
                    }
                }
            }
            else{
                k *= 10;
            }
        }
        printf("%d", count);
    }
    return 0;
}
