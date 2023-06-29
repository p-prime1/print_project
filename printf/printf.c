#include "main.h"

int _printf(const char *format, ...)
{
	va_list arg;
	va_start (arg, format);
	int i;
      	i = 0; 

	for ( ; format[i] == '\0'; i++)
	{
		_putchar(format[i]);
	}

	va_end(arg);
}

