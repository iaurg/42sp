int	ft_isspace(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_isnumber(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	to_n (char c)
{
	return (c - '0');
}

int	ft_atoi(char *str)
{
	unsigned int	final_number;
	int				only_number;
	int				negative_signal;

	final_number = 0;
	negative_signal = 0;
	only_number = 0;
	while (ft_isspace(*str))
		str++;
	while (*str == 45 || *str == 43)
	{
		if (*str == 45)
			negative_signal++;
		str++;
	}
	while (!ft_isspace(*str) && ft_isnumber(*str))
	{
		final_number = final_number * 10 + to_n(*str);
		only_number = 1;
		str++;
	}
	if (negative_signal % 2 != 0)
		final_number *= -1;
	return (final_number);
}

/*
Escreva uma função que converta o início da cadeia apontada por str em inteiro
 do tipo
int
• str pode começar por um número arbitrário de ’white space’
(como definido por isspace(3))
• str pode então ser seguido por um número arbitrário de sinais + e sinais -
. O sinal - vai
mudar o sinal do inteiro retornado em função do número de sinais - e se est
e for par ou
ímpar.
• Por fim, str deverá ser composta por número da base 10
• Sua função deverá ler str desde que esta siga as regras acima e
 ela deve retornar o número
encontrado até então.
• Você não deve considerar os overflows e os underflows, o resultado
 é considerado indefinido
nesses casos.
• Você pode comparar sua função com a verdadeira função atoi, exceto
 a parte dos sinais
bem como do overflow.

espaços
-+
passar numero para resultado
*/

/*
#include <stdio.h>
int main(void)
{
    char var1[100] = " ---+--+1234ab567";
    char *s1;

    s1 = &var1[0];
    printf("numero: %d\n", ft_atoi(s1));

    return (0);
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int		main(void)
{
	// quando o comportamento e igual ao de atoi
	printf("Mine: %d\n", ft_atoi("12345/1234"));
    printf("Atoi: %d\n", atoi("12345/1234"));
    printf("Atoi Correct: %d\n", ft_atoi_correct("12345/1234"));
    printf("------\n");

	printf("------\n");
	printf("Mine: %d\n", ft_atoi("--xxxx xxx 124x5"));
	printf("Atoi: %d\n", atoi("--xxxx xxx 124x5"));
	printf("Atoi Correct: %d\n", ft_atoi_correct("--xxxx xxx 124x5"));
	printf("------\n");

	printf("------\n");
	printf("Mine: %d\n", ft_atoi(" --12x34ab567"));
	printf("Atoi: %d\n", atoi(" --12x34ab567"));
	printf("Atoi Correct: %d\n", ft_atoi_correct(" --12x34ab567"));
	printf("------\n");

	printf("------\n");
	printf("Mine: %d\n", ft_atoi("1234"));
	printf("Atoi: %d\n", atoi("1234"));
	printf("Atoi Correct: %d\n", ft_atoi_correct("1234"));
	printf("------\n");

	printf("------\n");
	printf("Mine: %d\n", ft_atoi("-1325632167"));
	printf("Atoi: %d\n", atoi("-1325632167"));
	printf("Atoi Correct: %d\n", ft_atoi_correct("-1325632167"));
	printf("------\n");

	printf("------\n");
	printf("Mine: %d\n", ft_atoi("--1325632167"));
	printf("Atoi: %d\n", atoi("--1325632167"));
	printf("Atoi correct: %d\n", ft_atoi_correct("--1325632167"));
	printf("------\n");

	printf("------\n");
	printf("Mine: %d\n", ft_atoi("1325632167"));
	printf("Atoi: %d\n", atoi("1325632167"));
	printf("Atoi Correct: %d\n", ft_atoi_correct("1325632167"));
	printf("------\n");

	printf("------\n");
	printf("Mine: %d\n", ft_atoi(" --12x34ab567"));
	printf("Atoi: %d\n", atoi(" --12x34ab567"));
	printf("Atoi Correct: %d\n", ft_atoi_correct(" --12x34ab567"));
	printf("------\n");


	printf("------\n");
	printf("Mine: %d\n", ft_atoi(" ---+--+1234ab567"));
	printf("Atoi: %d\n", atoi(" ---+--+1234ab567"));
	printf("Atoi Correct: %d\n", ft_atoi_correct(" ---+--+1234ab567"));
	printf("------\n");

	printf("------\n");
	printf("Mine: %d\n", ft_atoi("+0"));
	printf("Atoi: %d\n", atoi("+0"));
	printf("Atoi Correct: %d\n", ft_atoi_correct("+0"));
	printf("------\n");

	printf("------\n");
	printf("Mine: %d\n", ft_atoi("1325632"));
	printf("Atoi: %d\n", atoi("1325632"));
	printf("Atoi Correct: %d\n", ft_atoi_correct("1325632"));
	printf("------\n");

	printf("------\n");
	printf("Mine: %d\n", ft_atoi("175074925"));
	printf("Atoi: %d\n", atoi("175074925"));
	printf("Atoi Correct: %d\n", ft_atoi_correct("175074925"));
	printf("------\n");

	printf("------\n");
	printf("Mine: %d\n", ft_atoi("-2147483648"));
	printf("Atoi: %d\n", atoi("-2147483648"));
	printf("Atoi Correct: %d\n", ft_atoi_correct("-2147483648"));
	printf("------\n");

	printf("------\n");
	printf("Mine: %d\n", ft_atoi("-2147483647"));
	printf("Atoi: %d\n", atoi("-2147483647"));
	printf("Atoi Correct: %d\n", ft_atoi_correct("-2147483647"));
	printf("------\n");
	return (0);
}
*/

// Wiess tests

/*
#include <stdio.h>
int main(void)
{
	char *c;

	c = "1234";
	printf("str:\n%s\n", c);
	printf("Expected:\n1234\n");
	printf("Output:\n");
	printf("%d", ft_atoi(c));
	printf("\n");
	c = "    1234";
	printf("str:\n%s\n", c);
	printf("Expected:\n1234\n");
	printf("Output:\n");
	printf("%d", ft_atoi(c));
	printf("\n");
	c = "    ++++1234";
	printf("str:\n%s\n", c);
	printf("Expected:\n1234\n");
	printf("Output:\n");
	printf("%d", ft_atoi(c));
	printf("\n");
	c = "    ++++1234aaaa";
	printf("str:\n%s\n", c);
	printf("Expected:\n1234\n");
	printf("Output:\n");
	printf("%d", ft_atoi(c));
	printf("\n");
	c = "    ++++12aaa34aaaa";
	printf("str:\n%s\n", c);
	printf("Expected:\n12\n");
	printf("Output:\n");
	printf("%d", ft_atoi(c));
	printf("\n");
	c = "    ---12aaa34aaaa";
	printf("str:\n%s\n", c);
	printf("Expected:\n-12\n");
	printf("Output:\n");
	printf("%d", ft_atoi(c));
	printf("\n");
	return (0);
}
*/

// Fake moulinette

/*
#include <stdio.h>
#include <stdlib.h>

void	ft_atoi_like_test(char *str)
{
	int buff;
	int ft_buff;

	buff = atoi(str);
	ft_buff = ft_atoi(str);
	if (buff != ft_buff)
		printf("> KO, invalid int value returned. expected: %d got: %d\n",
		buff, ft_buff);
	else
		printf("> OK. result: %d\n", ft_buff);
}

void	ft_atoi_unlike_test(char *str, int expected_result)
{
	int ft_buff;

	ft_buff = ft_atoi(str);
	if (ft_buff != expected_result)
		printf("> KO, invalid int value returned expected: %d got: %d\n",
		expected_result, ft_buff);
	else
		printf("> OK, result: %d\n", ft_buff);
}

int		main(void)
{
	char *str;

	// quando o comportamento e igual ao de atoi
	str = " \n \t \r \v +1234567asd";
	ft_atoi_like_test(str);
	str = " \n \t\f\r \v -1234b67asd";
	ft_atoi_like_test(str);
	// quando o comportamento e diferente ao de atoi
	str = " \n \t \r \v --+-+-+-2147483648asd";
	ft_atoi_unlike_test(str, -2147483648);
	str = " \n \t\f\r \v -++-+-++1234b67asd";
	ft_atoi_unlike_test(str, -1234);
	return (0);
}
*/