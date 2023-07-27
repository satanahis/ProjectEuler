#include <stdio.h>

int main()
{
    long long int n = __INT64_MAX__;
    for(long long int i = 2520; i < n; i++){
        for(int j = 2; j<21;j++){
            if(i % j!=0){
                break;
            }else if(j==20){
                printf("%lld", i);
                return 0;
            }
        }
    }
    return 0;
}