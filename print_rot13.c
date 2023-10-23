#include "main.h"

/**
 * print_rot13 - writes the stringe in Rot13.
 * @ap: input.
 * @buf: buffer pointer.
 * @ibuf: index for buffer pointer.
 * Return: int.
 */

int print_rot13(va_list ap, char *buf, unsigned int ibuf)
{
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str;
	unsigned int i, j, f;
	char nill[] = "(avyy)";

	str = va_arg(ap, char *);
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			ibuf = handl_buffer(buf, nill[i], ibuf);
		return (6);
	}
	for (i = 0; str[i]; i++)
	{
		for (f = j = 0; alph[j]; j++)
		{
			if (str[i] == alph[j])
			{
				f = 1;
				ibuf = handl_buffer(buf, rot13[j], ibuf);
				break;
			}
		}
		if (f == 0)
			ibuf = handl_buffer(buf, str[i], ibuf);
	}
	return (i);
}
