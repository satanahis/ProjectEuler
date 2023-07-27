#include <stdio.h>
#include <math.h>

int main()
{
    int num = 0;
    int n = 0;
    int num2 = 0;
    int rev;
    int largest;

    for (int i = 999; i > 100; i--)
    {
        for (int j = 999; j > 100; j--)
        {
            num = i * j;
            num2 = num;
            rev = 0;
            n = floor(log10(abs(num))) + 1;
            if(n==5){
                break;
            }
            for (int i = 0; i < n; i++)
            {
                rev += num2 % 10;
                if (i < n - 1)
                {
                    rev *= 10;
                    num2 /= 10;
                }
            }
            if (rev == num)
            {
                if (largest < num)
                {
                    largest = num;
                }
                break;
            }
        }
    }
    printf("%d", largest);
    return 0;
}