#include <stdio.h>

int main()
{
    int a = 1;
    int b = 2;
    int sum = 2;

    do
    {
        a = (a + b);
        b = (a + b);
        if (a % 2 == 0)
        {
            sum += a;
        }
        else if (b % 2 == 0)
        {
            sum += b;
        }
    } while (sum < 4000000);

    printf("%d", sum);

    return 0;
}