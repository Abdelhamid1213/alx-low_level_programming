#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int value = 1;
	unsigned char *bytePointer = (unsigned char *)&value;

	return ((*bytePointer == 1) ? 1 : 0);
}
