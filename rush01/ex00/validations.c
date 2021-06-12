#include <stdio.h>

int space_verification(char c)
{
	// Validate spaces and breaklines special
	// || (c >= 9 && c <= 13)
    if (c == 32)
    {
        return (1);
    }
    return (0);
}

int valid_board(char *str) {
	int top_sum;
	int bottom_sum;
	int left_sum;
	int right_sum;

	// ARRUMA ISSO
	top_sum = (str[0] - '0') + (str[2] - '0') + (str[4] - '0') + (str[6] - '0');
	bottom_sum = (str[8] - '0') + (str[10] - '0') + (str[12] - '0') + (str[14] - '0');
	left_sum = (str[16] - '0') + (str[18] - '0') + (str[20] - '0') + (str[22] - '0');
	right_sum = (str[24] - '0') + (str[26] - '0') + (str[28] - '0') + (str[30] - '0');

	if (top_sum + bottom_sum == 16 || top_sum + bottom_sum == 17 || top_sum + bottom_sum == 18)
	{
		if (left_sum + right_sum == 16 || left_sum + right_sum == 17 || left_sum + right_sum == 18)
		{
			return (1);
		}
	}

	return (0);
}

int	validate_input(char *str)
{
	int counter;
    int invalid_number;

    invalid_number = 0;
    counter = 0;

    while(str[counter] != '\0')
    {
        if(counter >= 31 || invalid_number != 0)
            return(0);

        if ((counter + 1) % 2 != 0)
        {
            if((str[counter] >= '1' && str[counter] <= '4'))
            {
                counter++;
            }
            else
                invalid_number++;
        }
        if ((counter + 1) % 2 == 0)
        {
            if (space_verification(str[counter]))
            {
                counter++;
            }
            else
                invalid_number++;
        }
    }

	if (!valid_board(str)) {
		return (0);
	}

    return (counter == 31);
}

/*
	0 2 4 6
	8 10 12 14
	16 18 20 22
	24 26 28 30

	str[0] + str[2] == str[8] + str[10]
	top_sum = str[0] + str[2] + str[4] + str[6]
	col_bottom_sum = str[8] + str[10] + str[12] + str[14]

	if (col_top_sum == col_bottom_sum)
	{
		return (1)
	}
	*/

	// 35 a soma de todos os valores
	/*
	se a linha de cima for 8 || 9 a de baixo tambem precisa ser 8 || 9

	se a coluna de cima for 8 || 9 a de baixo tambem precisa ser 8 || 9
	"4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" - do rush
	"1 2 4 2 3 2 1 3 1 2 2 3 2 1 3 2" - de test do  game
	"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1" - mais um teste da dica erison lenda
	8 + 8
	9 + 9
	lados podem ser 10 + 7 || 9 + 9
	se lado 10 / 7
	mas coluna e linha nunca podem ter o mesmo numero, 8 - 9, nao pode 9-9 8-8
	"4 3 2 1 top 1 2 2 2 bot 4 3 2 1 left 1 2 2 2 right"

	4 3 2 1 top - 10
	1 2 2 2 bot - 7
	4 3 2 1 left - 10
	1 2 2 2 right - 7
	*/