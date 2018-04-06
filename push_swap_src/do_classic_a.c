/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_classic_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 16:27:08 by pcluchet          #+#    #+#             */
/*   Updated: 2017/03/28 16:31:12 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_classic_a(t_checker *env, int *pivots, int i)
{
	int fullturn;

	fullturn = -1;
	while (LA && fullturn != VA_ID && !list_above_id(LA, pivots[i]))
	{
		if (VA_ID <= pivots[i])
		{
			DO_PB;
		}
		else
		{
			if (fullturn == -1)
				fullturn = VA_ID;
			DO_RA;
		}
	}
}
