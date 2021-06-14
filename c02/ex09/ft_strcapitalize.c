int	ft_special_character(char letter)
{
	if (
		(letter >= 0 && letter <= 31) || (letter >= 33 && letter <= 47)
		|| (letter >= 58 && letter <= 64) || (letter >= 91 && letter <= 96)
		|| letter > 122)
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_lowercase(char letter)
{
	if (letter >= 97 && letter <= 122)
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_alpha(char letter)
{
	if ((letter >= 65 && letter <= 90) || (letter >= 97 && letter <= 122))
	{
		return (1);
	}
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	x;
	int	letter;

	x = 0;
	while (str[x] != '\0')
	{
		letter = str[x];
		if ((letter >= 65 && letter <= 90))
		{
			str[x] = letter + 32;
		}
		x++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	x;
	int	letter;

	x = 0;
	ft_strlowcase(str);
	while (str[x] != '\0')
	{
		letter = str[x];
		if (ft_str_is_alpha(str[0]) && ft_str_is_lowercase(str[0]))
		{
			str[x] = letter - 32;
			x++;
		}
		if ((ft_str_is_alpha(str[x]) && ft_str_is_lowercase(str[x])
				&& str[x - 1] == 32) || (ft_str_is_alpha(str[x])
				&& ft_str_is_lowercase(str[x])
				&& ft_special_character(str[x - 1]))
		)
		{
			str[x] = letter - 32;
		}
		x++;
	}
	return (str);
}

/*
#include <stdio.h>
#include <string.h>

-W]AqvPF39'B/P^/I+Q})Gzn*:?X:*[Y0,[Yq
+W]Aqvpf39'B/P^/I+Q})Gzn*:?X:*[Y0,[Yq

-8eJ
+8ej

-D3l^V`W/#Vg9y:0Gs
+D3l^V`W/#Vg9y:0gs

-)D*_IG#Oeq
+)D*_Ig#Oeq

-ReKt17+LOl MdR Mdr 4242l42
+Rekt17+Lol Mdr Mdr 4242l42

-@Isso a`mxr
+@Isso A`mxr


-Vk_(7X)Vmf#H'Fk?>8j@} /7VVxh3(X{6)Xb
+Vk_(7x)Vmf#H'Fk?>8j@} /7vvxh3(X{6)Xb

-NULL
+Null

int	main(void)
{
	char original[] = "Vk_(7X)Vmf#H'Fk?>8j@} /7VVxh3(X{6)Xb";
	char correct[] = "Vk_(7x)Vmf#H'Fk?>8j@} /7vvxh3(X{6)Xb";

	printf("ORIGINAL: %s", original);
	printf("\n");
	printf("UPPERCASEf: %s", ft_strcapitalize(original));
	printf("\n");

	if(strcmp(ft_strcapitalize(original), correct) == 0)
        printf("====OK====\n\n");
    else
        printf("----KO----\n\n");

	return (0);
}
*/