#include "main.h"

/**
 * _printf - print data.
 * @format: string.
 * Return: int.
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, leng = 0, ibuf = 0;
	va_list ap;
	int (*function)(va_list, char *, unsigned int);
	char *buff;

	va_start(ap, format), buff = malloc(sizeof(char) * 1024);
	if (!format || !buff || (format[i] == '%' && !format[i + 1]))
		return (-1);
	if (!format[i])
		return (0);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{	print_buffer(buff, ibuf), free(buff), va_end(ap);
				return (-1);
			}
			else
			{	function = g_p_f(format, i + 1);
				if (function == NULL)
				{
					if (format[i + 1] == ' ' && !format[i + 2])
						return (-1);
					handl_buffer(buff, format[i], ibuf), leng++, i--;
				}
				else
				{
					leng += function(ap, buff, ibuf);
					i += e_p_f(format, i + 1);
				}
			} i++;
		}
		else
			handl_buffer(buff, format[i], ibuf), leng++;
		for (ibuf = leng; ibuf > 1024; ibuf -= 1024)
			;
	}
	print_buffer(buff, ibuf), free(buff), va_end(ap);
	return (leng);
}
