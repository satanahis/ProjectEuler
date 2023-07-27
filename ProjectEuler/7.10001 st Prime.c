#include <stdio.h>

int main()
{
	int divcount;
	int amcount = 0;

	for (long long int i = 1; i < __INT64_MAX__; i++)
	{
		divcount = 0;
		for (long long int j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				divcount++;
				if (divcount == 2 && j == i)
				{
					amcount++;
					if (amcount == 10001)
					{
						printf("%lld\n", i);
						return 0;
					}
				}
			}
		}
	}
	return 0;
}