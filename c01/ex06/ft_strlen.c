/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 22:18:06 by itaureli          #+#    #+#             */
/*   Updated: 2021/06/09 02:02:34 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen (char *str)
{
	int	counter;

	counter = 0;
	while (str[0] != '\0' && str[++counter] != '\0')
		;
	return (counter);
}
