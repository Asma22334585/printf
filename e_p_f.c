#include "main.h"

/**
 * e_p_f - returns the amount of identifiers.
 * @s: argument indentifier.
 * @index: index of argument identifier.
 * Return: amount of identifiers.
 */
int e_p_f(const char *s, int index)
{
	print_WA pr[] = {
		{"c", print_char}, {"s", print_s}, {"i", print_integer},
		{"d", print_integer}, {"b", print_b}, {"u", print_unint},
		{"o", print_octal}, {"x", print_hexd}, {"X", print_uphex},
		{"S", print_usr}, {"p", print_address}, {"li", printlint},
		{"ld", printlint}, {"lu", printlunint}, {"lo", print_long_oct},
		{"lx", printlhexdecimal}, {"lX", print_uphex}, {"hi", printshint},
		{"hd", printshint}, {"hu", printshunint}, {"ho", printldoct},
		{"hx", printshhex}, {"hX", printhupphex}, {"#o", printnumocta},
		{"#x", printnumhex}, {"#X", printnupphex}, {"#i", print_integer},
		{"#d", print_integer}, {"#u", print_unint}, {"+i", printpint},
		{"+d", printpint}, {"+u", print_unint}, {"+o", print_octal},
		{"+x", print_hexd}, {"+X", print_uphex}, {" i", printshint},
		{" d", printshint}, {" u", print_unint}, {" o", print_octal},
		{" x", print_hexd}, {" X", print_uphex}, {"R", print_rot13},
		{"r", print_r}, {"%", print_prg}, {"l", print_prg},
		{"h", print_prg}, {" +i", printpint}, {" +d", printpint},
		{"+ i", printpint}, {"+ d", printpint}, {" %", print_prg},
		{NULL, NULL},
	};
	int i = 0, j = 0, f_i;

	f_i = index;
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
			j = 0;
			i++;
			index = f_i;
		}
	}
	return (j);
}
