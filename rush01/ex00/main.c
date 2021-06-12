void ft_print_error();
int rush(char *str);
int	validate_input(char *str);

int	main(int argc, char *argv[])
{
	// First element is the file itself
	// ./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" <<<<< COM ASPAS UM TEXTAO
	if(argc != 2 || !validate_input(argv[1]))
	{
		ft_print_error();
		return(0);
	}

    rush(argv[1]);

    return (1);
}


/*

	Anotações:
	- A soma das bordas é tamanho do jogo ao quadrado (4x4) = 16
	- Sempre existe quatro numeros 1 nas bordas, 1 em cada aresta
	-


	col1up = 1
	col2up = 2
	col3up = 3
	col4up = 4
	col1down = 5
	col2down = 6
	col3down = 7
	col4down = 8
	row1left = 9
	row2left = 10
	row3left = 11
	row4left = 12
	row1right = 13
	row2right = 14
	row3right = 15
	row4right = 16


	[0][0] - [0][1] - [0][2] - [0][3]
	[1][0] - [1][1] - [1][2] - [1][3]
	[2][0] - [2][1] - [2][2] - [2][3]
	[3][0] - [3][1] - [3][2] - [3][3]

					[0][0]		[0][1]      [0][3]      [0][4]
				col1up = 1 | col2up = 2 | col3up = 3 | col4up = 4

	row1left = 9														row1right = 13
	------------														------------
	row2left = 10														row2right = 14
	------------														------------
	row3left = 11														row3right = 15
	------------														------------
	row4left = 12														row4right = 16

				col1down = 5 | col2down = 6 | col3down = 7 | col4down = 8

	Matriz
	[0][0]		[0][1]      [0][3]      [0][4]
	col1up = 1 | col2up = 2 | col3up = 3 | col4up = 4

	[1][0]		[1][1]      [1][3]      [1][4]
	col1down = 5 | col2down = 6 | col3down = 7 | col4down = 8

	[2][0]		[2][1]      [2][3]      [2][4]
	row1left = 9 | row2left = 10 | row3left = 11 | row4left = 12

	[3][0]		[3][1]      [3][3]      [3][4]
	row1right = 13 | row2right = 14 | row3right = 15 | row4right = 16




Material:
http://web.cs.ucla.edu/classes/fall19/cs131/hw/hw4.html

Pasta de entrega : ex00/
Arquivos para entregar : Todos os arquivos necessários
Funções autorizadas : write, malloc, free

O programa será compilado com:
[] - cc -Wall -Wextra -Werror -o rush-01 *.c

[] - Cada uma das vistas (duas por linha e duas por coluna) terá um valor dado, de 1
a 4. O seu programa deve colocar as caixas corretamente, prestando atenção para
ter apenas uma caixa de cada altura em cada linha e coluna.

[] -  Se existirem muitas soluções, você deve exibir a primeira que encontrar.

[] - O programa será iniciado da seguinte maneira:
> ./rush-01 col1up col2up col3up col4up col1down col2down col3down col4down row1left row2left row3left row4left row1right row2right row3right row4right

[x] - Em caso de erro você deve escrever somente "Error" seguido de uma quebra de linha.

[] - Verificar se o jogo é válido somando as arestas topo = 9 e lados = 8 para 4x4

[] - O seu trabalho deve estar dentro da Norma: seja muito rigoroso.

Você deverá exibir na saída a resolução da seguinte maneira:

Cada valor deve estar entre 1 e 4.

>./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e
1 2 3 4$
2 3 4 1$
3 4 1 2$
4 1 2 3$

Como bônus, você pode fazer um programa que resolva tabuleiros de tamanhos diferentes,
como 3x3, 5x5, etc.

Seu programa deve preencher as caixas internas e retornar a resposta conforme
solicitado no tema.

CONFIRA TUDO E COMPARE COM O PDF PARA NÃO ERRAR NA ENTREGA.
*/