#include "main.h"
/**
  *print_sign - entry point
  *@n: the input
  *Return: 1 is the greater
  *
  */
int print_sign(int n)

{
if (n > 0)
{
	_putchar(43);
	return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
	_putchar(48);
	return (0);
}
_putchar('\n');
}
