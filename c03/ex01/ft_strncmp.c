int	ft_strncmp (char *s1, char *s2, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (x < n && (*s1 != '\0' || *s2 != '\0'))
	{
		if (*s1 != *s2)
			return ((int)(unsigned char)*s1 - (int)(unsigned char)*s2);
		s1++;
		s2++;
		x++;
	}
	return (0);
}

/*
 (int)(unsigned char) serve para garantir que os valores sempre
 serão positivos e evitar erros de calculo
*/

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char original[] = "x";
	char copied[] = "xxxxx";
	// printf("s1:%d, s2:%d \n", *s1, *s2);

	printf("MINE %d", ft_strncmp(original, copied, 30));
	printf("\n");

	printf("ORIGINAL %d", strncmp(original, copied, 30));
	printf("\n");

	return (0);
}
*/

//vweiss tests

/*
#include <stdio.h>
#include <bsd/string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char a[] = "abc";
	char b[] = "abcaaaa";
	char c[] = { 'a', -10, 'b' };

	printf("Testing if\n");
	printf("a == a\n");
	printf("abcaaaa > abc\n");
	printf("ab == ab \n");
	printf("abcaa == abcaa \n");

	if (
		(strncmp(a, b, 1) == ft_strncmp(a, b, 1))
		&& (strncmp(b, a, 4) == ft_strncmp(b, a, 4))
		&& (strncmp(a, a, 2) == ft_strncmp(a, a, 2))
		&& (strncmp(b, b, 5) == ft_strncmp(b, b, 5))
		&& (strncmp(a, c, 5) == ft_strncmp(a, c, 5))
		&& (strncmp(a, a, 0) == ft_strncmp(a, a, 0))
	)
	{
		printf("OK!");
	}
	else
	{
		printf("KO!");
	}
	return (0);
}
*/