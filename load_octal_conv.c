#include "main.h"

/**
 * load_oct_conv - writes the character c to stdout
 *
 * @bin: array where is stored the binary.
 * @oct: array where is stored the octal.
 *
 * Return: binary array.
 */
char *load_oct_conv(char *bnr, char *oct)
{
	int og, i, j, ioct, lmt;

	oct[11] = '\0';
	for (i = 31, ioct = 10; i >= 0; i--, ioct--)
	{
		if (i > 1)
			lmt = 4;
		else
			lmt = 2;
		for (og = 0, j = 1; j <= lmt; j *= 2, i--)
			og = ((bin[i] - '0') * j) + og;
		i++;
		oct[ioct] = og + '0';
	}
	return (oct);
}
