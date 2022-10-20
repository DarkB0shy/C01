/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:07:56 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/20 13:33:09 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div(int *a, int *b)
{
	int c;
	
	c = *a;
	*a = c / *b;
	*b = c % *b;
}

int	main(void)
{
	int *ptra;
	int *ptrb;
	int fa = 8;
	int fb = 4;

	ptra = &fa;
	ptrb = &fb;

	ft_ultimate_div(ptra, ptrb);
	printf("%d, %d", *ptra, *ptrb);
	return(0);
}
