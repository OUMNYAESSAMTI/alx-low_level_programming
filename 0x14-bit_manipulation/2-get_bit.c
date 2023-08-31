#include "main.h"

/**
 * 
 *get_bit - retrieves the bit value at a specified index within a decimal number
 *@n: the number under examination
 *@index: the targeted bit index
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
