/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:09:30 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/20 19:47:16 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int c;
	int aux[size];

	i = 0;
	c = size - 1;
	while(c >= 0)
	{
		aux[i] = tab[c];
		c--;
		i++;
	}
	while (c < size)
	{
		tab[c] = aux[c];
		c++;
	}

}

int	main(void)
{
	int	ia[6] = {0, 1, 2, 3, 4, 5};
	ft_rev_int_tab(ia, 6);
	return(0);
}
