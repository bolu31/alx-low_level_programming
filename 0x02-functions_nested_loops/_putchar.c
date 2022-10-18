#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c
 * on c: the character to print
 *
 * Return = 1 (success)
 */
int  _putchar(char c)
{
	return(write(1, &c, 1));
}
