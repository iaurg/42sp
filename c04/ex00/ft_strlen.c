int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}

// fake-moulinette tests
/*
#include <stdio.h>
#include <string.h>

void	ft_strlen_test(char *str)
{
	int size;
	int ft_size;

	size = strlen(str);
	ft_size = ft_strlen(str);
	if (size != ft_size)
		printf("> KO, return value of ft_strlen differs from expected.
		expected: %d, got: %d\n", size, ft_size);
	else
		printf("> OK. result: %d\n", ft_size);
}

int	main(void)
{
	char *str;

	str = "";
	ft_strlen_test(str);
	str = "Test";
	ft_strlen_test(str);
	str = "Testing mored and more and more and more and more and more.";
	ft_strlen_test(str);
	return (0);
}
*/