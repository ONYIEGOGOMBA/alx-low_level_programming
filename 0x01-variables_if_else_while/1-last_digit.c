#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - It prints the last digit of a number stored in the variable n
 *
 * Return: Always 0 (success)
 *
 */

int main(void)

{

	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is %d", n, n % 100);

	if (n % 100 > 5)

		printf("and is greater than 5\n");

	else if (n % 100 == 0)

		printf("and is 0\n");

	else if (n % 100 < 6 && n % 100 != 0)

		printf("and is less than 6 and not 0\n");

	return (0);

}

