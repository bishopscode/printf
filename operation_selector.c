#include "main.h"
/**
 * fetch_print_func - select correct function to perform the operation.
 * @s: the argument indentifier
 * @index: the index for argument indentifier
 * Return: pointer to a function.
 */
int (*fetch_print_func(const char *s, int index))(va_list, char *, unsigned int)
{
	print_t pr[] = {
		{"c", print_char}, {"s", print_str},
		{"i", print_int}, {"d", print_int},
		{"b", print_bin}, {"u", print_unt},
		{"o", print_oct}, {"x", print_hex},
		{"X", print_upx}, {"S", print_usr},
		{"p", print_add}, {"li", prtlint},
		{"ld", prtlint}, {"lu", prtlunt},
		{"lo", prtloct}, {"lx", prtlhex},
		{"lX", prtlupx}, {"hi", prthint},
		{"hd", prthint}, {"hu", prthunt},
		{"ho", prthoct}, {"hx", prthhex},
		{"hX", prthupx}, {"#o", prtnoct},
		{"#x", prtnhex}, {"#X", prtnupx},
		{"#i", print_int}, {"#d", print_int},
		{"#u", print_unt}, {"+i", prtpint},
		{"+d", prtpint}, {"+u", print_unt},
		{"+o", print_oct}, {"+x", print_hex},
		{"+X", print_upx}, {" i", prtsint},
		{" d", prtsint}, {" u", print_unt},
		{" o", print_oct}, {" x", print_hex},
		{" X", print_upx}, {"R", print_rot},
		{"r", print_rev}, {"%", print_prog},
		{"l", print_prog}, {"h", print_prog},
		{" +i", prtpint}, {" +d", prtpint},
		{"+ i", prtpint}, {"+ d", prtpint},
		{" %", print_prog}, {NULL, NULL},
	};
	int i= 0, j = 0, first_index;

	first_index = index;
	while (pr[i].type_arg)
	{
		if (s[index] == pr[i].type_arg[j])
		{
			if (pr[i].type_arg[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			i = 0;
			i++;
			index = first_index;
		}
	}
	return (pr[i].f);
}
