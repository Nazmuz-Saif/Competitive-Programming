#include <stdio.h>
void Sort(long long int arr[], long long int n) {
    for (long long int i = 0; i < n - 1; i++) {
        long long int min_idx = i;
        for (long long int j = i + 1; j < n; j++) {
            if (arr[j] > arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}
int main()
{
    long long int t;
    scanf("%d", &t);
    while(t--){

        long long int n,k,i,j,cat=0,save=0,rk;
        scanf("%lld%lld", &n, &k);
        rk=k-1;
        long long int mice[k];
        for(i=0; i<k; i++){
            scanf("%lld", &mice[i]);
        }
        Sort(mice, k);
        for(i=0; i<=rk; i++){
            while(mice[i]<n){
                for(j=0; j<k; j++){
                    if(mice[j]>cat){
                        rk= j+1;  //rk er value ber korte hobe
                    }
                }
                mice[i]++;
                cat++;
            }
            save++;
        }
        printf("%lld\n", save-1);
        }
    return 0;
}
