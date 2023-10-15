#include "main.h"

/**
 * load_hex_number - writes the character c to stdout
 *
 * @bin: the array that is stored in binary.
 * @hex: the array that is stored in hexadecimal.
 * @isupp: integer that determines if hexadecimal array is
 * in uppercase or lowercase letter.
 * @lmt: the size of hex
 * Return: binary array.
 */
char *load_hex_number(char *bin, char *hex, int isupp, int lmt)
{
	int og, b, k, alphabet;

	hex[lmt] = '\0';
	if (isupp)
		alphabet = 55;
	else
		alphabet = 87;
	for (b = (lmt * 4) - 1; b >= 0; b--)
	{
		for (og = 0, k = 1; k <= 8; k *= 2, b--)
			og = ((bin[b] - '0') * k) + og;
		b++;
		if (og < 10)
			hex[b / 4] = og + 48;
		else
			hex[b / 4] = og + alphabet;
	}
	return (hex);
}
