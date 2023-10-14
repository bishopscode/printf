#include "main.h"

/**
 * load_short_octal_print - the calculation of a short octal number
 *
 * @bin: array that is stored in the binary.
 * @octal: the array that is stored in the octal.
 *
 * Return: bin array.
 */
char *load_short_octal_print(char *bin, char *octal)
{
	int og, b, k, ioctal, lmt;

	octal[6] = '\0';
	for (b = 15, ioctal = 5; b >= 0; b--, ioctal--)
	{
		if (b > 0)
			lmt = 4;
		else
			lmt = 1;
		for (og = 0, k = 1; k <= lmt; k *= 2, b--)
			og = ((bin[b] - '0') * k) + og;
		b++;
		octal[ioctal] = og + '0';
	}
	return (octal);
}
