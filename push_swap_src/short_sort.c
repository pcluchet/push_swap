/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 16:29:58 by pcluchet          #+#    #+#             */
/*   Updated: 2017/03/28 16:31:12 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	short_helper(t_checker *env)
{
	if (VA_NEXT_ID > VA_LAST_ID)
	{
		DO_RA;
		DO_SA;
	}
	else
		DO_RA;
}

void		short_sort(t_checker *env)
{
	if (LEN == 2)
		DO_SA;
	else if (LEN == 3)
	{
		if (VA_ID == LEN - 1)
		{
			short_helper(env);
		}
		else if (VA_NEXT_ID == LEN - 1)
		{
			if (VA_ID > VA_LAST_ID)
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
	else
		barely_short_sort(env);
}
