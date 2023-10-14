#include "main.h"

/**
 * load_octal_print - writes character c to stdout
 *
 * @bin: the array that is stored in the binary.
 * @octal: array that is stored in the octal.
 *
 * Return: bin array.
 */
char *load_octal_print(char *bnr, char *octal)
{
	int og, b, k, ioctal, lmt;

	octal[11] = '\0';
	for (b = 31, ioctal = 10; b >= 0; b--, ioctal--)
	{
		if (b > 1)
			lmt = 4;
		else
			lmt = 2;
		for (og = 0, k = 1; k <= lmt; k *= 2, b--)
			og = ((bin[b] - '0') * k) + og;
		b++;
		octal[ioctal] = og + '0';
	}
	return (octal);
}
