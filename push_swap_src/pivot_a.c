/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pivot_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 16:29:35 by pcluchet          #+#    #+#             */
/*   Updated: 2017/03/28 16:31:12 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pivot_a(t_checker *env, int divide)
{
	int i;
	int	*pivots;
	int cpt;

	pivots = get_pivot(env, divide);
	i = 0;
	while (LA)
	{
		cpt = 0;
		do_classic_a(env, pivots, i);
		if (i == divide - 1)
		{
			while (LA)
				DO_PB;
		}
		if (i < divide - 1)
			i++;
	}
	free(pivots);
}
