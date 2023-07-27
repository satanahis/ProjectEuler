#include <stdio.h>

int main()
{
	int SumSquares = 0;
	int SquaresSum = 0;
	int result = 0;

	for (int i = 0; i < 14; i++)
	{
		SumSquares += i * i;
		SquaresSum += i;
	}
	SquaresSum *= SquaresSum;
	result = SquaresSum - SumSquares;
	printf("%lld", result);

	return 0;
}