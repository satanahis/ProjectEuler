#include <stdio.h>

int main()
{
    long long int num = 600851475143;
    int i;

    do
        for (i = 2; i < num;)
        {
            if (num % i == 0)
            {
                num /= i;
                break;
            }
            else
                i++;
        }
    while (num / 2 > i);
    printf("%lld", num);
    return 0;
}