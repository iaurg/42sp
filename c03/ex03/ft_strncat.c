char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*first_part;
	unsigned int	counter;

	counter = 0;
	first_part = dest;
	while (*first_part != '\0')
	{
		first_part++;
	}
	while (counter < nb && *src != '\0')
	{
		*first_part++ = *src++;
		counter++;
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
	char original2[] = "DEST";
	char copied2[] = "SOUR";

	printf("MINE %s", ft_strncat(original, copied, 3));
	printf("\n");

	printf("ORIGINAL %s", strncat(original2, copied2, 3));
	printf("\n");

	return (0);
}
*/

//vweiss tests
/*
#include <stdio.h>
#include <bsd/string.h>
int main(void)
{
	char str[50];
	char str1[50];
	char str2[50];
	char str3[50];
	char str4[] = "defghijk";

	strcpy(str, "abc");
	strcpy(str1, "abc");

	strcpy(str2, "abc");
	strcpy(str3, "abc");

	printf("Test1:\n");
	printf("dest: %s\n", str);
	printf("src: %s\n", str4);
	printf("n: %d\n", 0);

	strncat(str, str4, 0);
	ft_strncat(str1, str4, 0);

	printf("Expected:\n");
	printf("%s\n", str);
	printf("Ouput:\n");
	printf("%s\n", str1);
	printf("\n");
	printf("Test2:\n");
	printf("dest: %s\n", str2);
	printf("src: %s\n", str4);
	printf("n: %d\n", 40);

	strncat(str2, str4, 10);
	ft_strncat(str3, str4, 10);

	printf("Expected:\n");
	printf("%s\n", str2);
	printf("Ouput:\n");
	printf("%s\n", str3);

	return (0);
}
*/