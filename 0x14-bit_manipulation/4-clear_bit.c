#include "main.h"
#include <stddef.h>

/**
 * clear_bit - A function to set a bit at a position to 0
 * @n: number
 * @index: Index the position to be cleared
 *
 * Return: 1 on success, -1 on fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
