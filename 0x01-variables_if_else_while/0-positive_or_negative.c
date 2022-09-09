#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print if the number is positive, zero, or negative
* description: using the main function this prints Programming is positive. zero, or negative
* Return: 0
*/
int main(void)

{

	int n;



	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)

	{

		printf("%d is positive\n", n);

	}

	else if (n == 0)

	{

		printf("%d is zero\n", n);

	}

	else if (n < 0)

	{

		printf("%d is negative\n", n);

	}

	return (0);

}
