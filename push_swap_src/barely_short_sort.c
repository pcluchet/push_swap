/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   barely_short_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 16:26:47 by pcluchet          #+#    #+#             */
/*   Updated: 2017/03/28 16:31:12 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	barely_short_sort(t_checker *env)
{
	while (cnt_list(LA) > 3)
	{
		if (VA_ID == 0 || (LEN > 4 && VA_ID == 1))
			DO_PB;
		else
			DO_RA;
	}
	short_sort_a(env);
	if (VB_ID != 1 && LEN > 4)
		DO_SB;
	while (LB)
		DO_PA;
}
