#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index
 * @n: Number
 * @index: the index starting from 0 of the required bit
 *
 * Return: Converted value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 66)
		return (-1);
	return ((n >> index) & 1);
}
