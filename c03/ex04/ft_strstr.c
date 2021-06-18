char	*ft_strstr(char *str, char *to_find)
{
	char	*temp_str;
	char	*temp_to_find;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		temp_str = str;
		temp_to_find = to_find;
		while (*temp_str == *temp_to_find && *temp_to_find != '\0')
		{
			temp_str++;
			temp_to_find++;
		}
		if (*temp_to_find == '\0')
			return (str);
		str++;
	}
	return (0);
}

/*
Returns a pointer to the first occurrence of str2 in str1, or a null
pointer if str2 is not part of str1.
*/

/*
#include <stdio.h>
#include <bsd/string.h>

char	*ft_strstr(char *str, char *to_find);

int main(void)
{
	char str[] = "alguma coisa";
	char to_find_1[] = "coisa";
	char to_find_2[] = "coisaaaaa";

	printf("%s\n", strstr(str, ""));
	printf("%s\n", ft_strstr(str, ""));

	printf("Teste 1:\n");
	printf("Haystack: %s\n", str);
	printf("Needle: %s\n", to_find_1);
	printf("Expected:\n");
	printf("%s\n", ft_strstr(str, to_find_1));
	printf("Output:\n");
	printf("%s\n", strstr(str, to_find_1));
	printf("\n");
	printf("Teste 2:\n");
	printf("Haystack: %s\n", str);
	printf("Needle: %s\n", to_find_2);
	printf("Expected:\n");
	printf("%s\n", ft_strstr(str, to_find_2));
	printf("Output:\n");
	printf("%s\n", strstr(str, to_find_2));
	printf("\n");
	printf("Teste 3:\n");
	printf("Haystack: %s\n", str);
	printf("Needle: \"\"\n");
	printf("Expected:\n");
	printf("%s\n", strstr(str, ""));
	printf("Output:\n");
	printf("%s\n", ft_strstr(str, ""));
}
*/

/*
	char *strcasestr(const char *haystack, const char *needle);

	DESCRIPTION
	The strstr() function finds the first occurrence of the substring needle
	in the string haystack.
	The terminating null bytes ('\0') are not compared.

	RETURN VALUE
	These functions return a pointer to the beginning of the located substring,
	or NULL if the  sub‐string is not found.
*/