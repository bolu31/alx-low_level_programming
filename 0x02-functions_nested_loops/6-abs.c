#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an intrger
 * @b: The integer to be computed
 * Return: The absolute value
 */
int _abs(int b)
{

if (b < 0)
{
return (b * (-1));
}

else if (b == 0)
{
return (0);
}

else
{
return (b);
}

}
