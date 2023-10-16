#include "main.h"

/**
 * load_short_oct_conv - the calculation of a short octal number
 * @bin: arr that is stored in the binary.
 * @oct: the array that is stored in the octal.
 *
 * Return: bin array.
 */
char *load_short_oct_conv(char *bin, char *oct)
{
	int og, i, j, ioctal, lmt;

	oct[6] = '\0';
	for (i = 15, ioct = 5; i >= 0; i--, ioct--)
	{
		if (i > 0)
			lmt = 4;
		else
			lmt = 1;
		for (og = 0, j = 1; j <= lmt; j *= 2, i--)
			og = ((bin[i] - '0') * j) + og;
		i++;
		oct[ioct] = og + '0';
	}
	return (oct);
}
