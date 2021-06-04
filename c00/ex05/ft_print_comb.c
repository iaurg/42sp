#include <unistd.h>
// 48~57 = 0~9

void	ft_print_comb(void)
{
	int number;

	number = 48;

	write(1, &number, 1);
}