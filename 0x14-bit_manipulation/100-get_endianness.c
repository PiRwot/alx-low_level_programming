#include "main.h"

/**
  * get_endianness - returns processor endianness
  * Return: 0 if big endian, 1 if little endian
  */

int get_endianness(void)
{
	unsigned int i = 1;
	char *j = (char *)&i;

	if (*j)
		return (1);
	return (0);
}
