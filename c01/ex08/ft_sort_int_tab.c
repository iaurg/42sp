/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 02:44:00 by itaureli          #+#    #+#             */
/*   Updated: 2021/06/11 04:11:23 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// [1,2,3,4,5]
// [1,2,3,4,5]
// [1,2,3,4,5]
// [1,2,3,4,5]
// [10,8,7,4,2]
// [8,10,7,4,2]
//  *
void	ft_sort_int_tab(int *tab, int size)
{
	int	step;
	int	left_temp;

	step = 0;
	//5 - 10000 * 10000
	while (size > 0 && size * size)
	{
		while (step < size - 1)
		{
			if (tab[step] > tab[step + 1])
			{
				left_temp = tab[step];
				tab[step] = tab[step + 1];
				tab[step + 1] = left_temp;
			}
			step++;
		}
		step = 0;
		size--;
	}
}
