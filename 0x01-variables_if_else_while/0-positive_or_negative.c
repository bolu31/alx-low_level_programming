#include <stdlib.h>                                                                                                       
#include <time.h>                                                                                                         
#include <stdio.h>
/* headers goes there */
/* betty style for function main goes there */
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* code goes here*/
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
