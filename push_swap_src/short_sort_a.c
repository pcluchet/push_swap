/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sort_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 16:30:03 by pcluchet          #+#    #+#             */
/*   Updated: 2017/03/28 16:31:12 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	short_sort_a(t_checker *env)
{
	if (cnt_list(LA) == 3 && !list_sorted(LA))
	{
		if (VA == list_maxi(LA))
		{
			if (VA_NEXT > list_last_val(LA))
			{
				DO_RA;
				DO_SA;
			}
			else
				DO_RA;
		}
		else if (VA_NEXT == list_maxi(LA))
		{
			if (VA > list_last_val(LA))
				DO_RRA;
			else
			{
				DO_RRA;
				DO_SA;
			}
		}
		else
			DO_SA;
	}
}
