int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return ((int)(unsigned char)*s1 - (int)(unsigned char)*s2);
		s1++;
		s2++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char original[] = { 'a', -10, 'b', '\0' };
	char copied[] = "Teste de funaax";
	// printf("s1:%d, s2:%d \n", *s1, *s2);

	printf("MINE %d", ft_strcmp(original, copied));
	printf("\n");

	printf("ORIGINAL %d", strcmp(original, copied));
	printf("\n");

	return (0);
}
*/

// vweiss tests

/*
#include <stdio.h>
#include <bsd/string.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char a[] = "abc";
	char b[] = "abcaaaa";
	char c[] = { 'a', -10, 'b' };

	if (
		(strcmp(a, b) == ft_strcmp(a, b))
		&& (strcmp(b, a) == ft_strcmp(b, a))
		&& (strcmp(a, a) == ft_strcmp(a, a))
		&& (strcmp(b, b) == ft_strcmp(b, b))
		&& (strcmp(a, c) == ft_strcmp(a, c))
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

/*
Comparar duas strings

A função strcmp () compara as duas strings s1 e s2.
-1 0 1
s1 < s2 = -1
s1 = s2 = 0
s1 > s2 = 1
Ele retorna um número inteiro menor que, igual a ou maior que zero se s1 for
considerado, respectivamente, menor que, igual ou maior que s2.

*s = retorna o valor ascii

VALOR DE RETORNO
As funções strcmp () e strncmp () retornam um número inteiro menor,
igual ou maior que zero se s1 (ou os primeiros n bytes do mesmo) for
considerado, respectivamente, menor que, igual ou maior que s2 .
*/
