/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:49:09 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/20 20:46:59 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int bubble;
	
	i = 1;
	while (i < size - 1)
	{
		while (i + 1 < size)
		{
			if (tab[i+1] > tab[i])
			{
				bubble = tab[i + 1];
				tab[i] = tab[i + 1];
				tab[i + 1] = bubble;
			}
		}
		i++;
	}
}

int main(void)
{
	int i;
	int ia[6] = {4, 7, 3, 1, 9, 6};
	ft_sort_int_tab(ia, 6);
}
