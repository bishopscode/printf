#include "main.h"

/**
 * load_hex_conv - writes the character c to stdout
 * @bin: the array that is stored in binary.
 * @hex: the array that is stored in hexadecimal.
 * @isupp: integer that determines if hexadecimal array is
 * in uppercase or lowercase letter.
 * @lmt: the size of hex
 * Return: binary array.
 */
char *load_hex_conv(char *bin, char *hex, int isupp, int lmt)
{
	int og, i, j, toletter;

	hex[lmt] = '\0';
	if (isupp)
		toletter = 55;
	else
		toletter = 87;
	for (i = (lmt * 4) - 1; i >= 0; i--)
	{
		for (og = 0, j = 1; j <= 8; j *= 2, i--)
			og = ((bin[i] - '0') * j) + og;
		i++;
		if (og < 10)
			hex[i / 4] = og + 48;
		else
			hex[i / 4] = og + toletter;
	}
	return (hex);
}
