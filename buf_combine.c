#include "main.h"

/**
 * com_buff - concatenates the buffer characters
 * @buff: buffer pointer
 * @c: charcter to concatenate
 * @ibuff: index of buffer pointer
 * Return: index of buffer pointer.
 */
unsigned int com_buff(char *buff, char c, unsigned int ibuff)
{
	if (ibuff == 1024)
	{
		print_buff(buff, ibuff);
		ibuff = 0;
	}
	buff[ibuff] = c;
	ibuff++;
	return (ibuff);
}
