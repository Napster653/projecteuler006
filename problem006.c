#include <stdio.h>

int main ()
{
	int n = 100;

	int sumofsquares, squareofsums, difference;

	for (int i = 0; i <= n; i++)
	{
		sumofsquares += i*i;
	}
	squareofsums = n * (n + 1) / 2;
	squareofsums *= squareofsums;

	difference = squareofsums - sumofsquares;

	printf("Difference: %d\n", difference);

	return 0;
}
