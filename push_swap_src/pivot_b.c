/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pivot_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 16:29:41 by pcluchet          #+#    #+#             */
/*   Updated: 2017/03/28 16:31:12 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pivot_b(t_checker *env)
{
	int		done;
	int		cpt;

	done = 0;
	cpt = 0;
	while (LB)
	{
		while (VB_ID != LEN - 1 - done)
		{
			if (shortest_way_eq(LB, LEN - 1 - done) == 'U')
				DO_RB;
			else
				DO_RRB;
			cpt++;
		}
		DO_PA;
		done++;
	}
}
