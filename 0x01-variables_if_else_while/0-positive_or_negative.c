#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print if number is positive
 *
 * Discription: input the main function
 * this line print 'programming is negative, positive, or zero
 * Return: always 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
   /*code goes below here */
if (n > 0)
{
	printf("%i is positive\n", n);
}
else if (n == 0)
{
	printf("%i is zero\n", n);
}
else if (n < 0)
{
	printf("%i is negative\n", n);
}
return (0);
}
