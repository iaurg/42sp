/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 02:03:01 by itaureli          #+#    #+#             */
/*   Updated: 2021/06/09 02:03:04 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux1;
	int	counter;

	if (size <= 0)
		return ;
	counter = 0;
	size = size - 1;
	while (counter < size)
	{
		aux1 = tab[counter];
		tab[counter] = tab[size];
		tab[size] = aux1;
		size--;
		counter++;
	}
}
