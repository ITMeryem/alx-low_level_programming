#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: This program generates a random number
 * and determines whether it is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	srand((unsigned int)time(NULL));
	// Generate a random number between -100 and 100
	n = rand() % 201 - 100;
	printf("The number is: %d\n", n);
	if (n > 0)
	{
		n = 98; // Assign 98 if the number is positive
		printf("%d is positive\n", n);
	}
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("0 is zero\n");
	return (0);
}
