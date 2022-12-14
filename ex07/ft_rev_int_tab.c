/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:09:30 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/23 12:56:40 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	c;
	int	z;

	i = 0;
	c = size - 1;
	while (i < c)
	{
		z = tab[i];
		tab[i] = tab[c];
		tab[c] = z;
		c--;
		i++;
	}
}
