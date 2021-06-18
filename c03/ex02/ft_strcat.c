char	*ft_strcat(char *dest, char *src)
{
	char	*first_part;

	first_part = dest;
	while (*first_part != '\0')
	{
		first_part++;
	}
	while (*src != '\0')
	{
		*first_part++ = *src++;
	}
	*first_part = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char original[] = "DEST";
	char copied[] = "SOUR";

	printf("MINE %s", ft_strcat(original, copied));
	printf("\n");

	printf("ORIGINAL %s", strcat(original, copied));
	printf("\n");

	return (0);
}
*/

// vweiss tests

/*
#include <stdio.h>
#include <bsd/string.h>

char	*ft_strcat(char *dest, char *src);

int main(void)
{
	char src[50];
	char src1[50];
	char src2[50];
	char src3[50];
	char src4[] = "defghijklm";
	char src5[] = { 'a', -10, 'c', '\0' };

	strcpy(src, "abc");
	strcpy(src1, "abc");
	strcpy(src2, "abc");
	strcpy(src3, "abc");

	printf("Test1:\n");
	printf("Expected:\n");
	printf("%s\n", strcat(src1, src4));
	printf("Output:\n");
	printf("%s\n", ft_strcat(src, src4));
	printf("\n");
	printf("Test2:\n");
	printf("Expected:\n");
	printf("%s\n", strcat(src3, src5));
	printf("Output:\n");
	printf("%s\n", ft_strcat(src2, src5));

	if (
		strcmp(src, src1) == 0
		&& strcmp(src2, src3) == 0
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