#include <unistd.h>

void ft_putchar(char *c) {
	write(1, &c, 1);
}

void ft_print_error()
{
	write(1, "Error\n", 6);
}