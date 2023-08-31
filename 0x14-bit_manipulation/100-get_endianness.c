#include "main.h"

/**
 * get_endianness - examines whether a machine follows little or big endian format
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

