#include "main.h"

/**
 * load_short_oct_conv - calculates a short octal number
 *
 * @bin: array where is stored the binary.
 * @oct: array where is stored the octal.
 *
 * Return: binary array.
 */
char *load_short_oct_conv(char *bin, char *oct)
{
	int og, i, j, ioct, lmt;

	oct[6] = '\0';
	for (i = 15, ioct = 5; i >= 0; i--, ioct--)
	{
		if (i > 0)
			lmt = 4;
		else
			lmt = 1;
		for (og = 0, j = 1; j <= limit; j *= 2, i--)
			og = ((bin[i] - '0') * j) + og;
		i++;
		oct[ioct] = og + '0';
	}
	return (oct);
}
