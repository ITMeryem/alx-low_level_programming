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
srand((unsigned int)time(NULL));
int n = rand() % 201 - 100;
printf("The number is: %d\n", n);
if (n > 0)
printf("is positive\n");
else if (n < 0)
printf("is negative\n");
else
printf("is zero\n");
return (0);
}
