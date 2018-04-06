/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_ints.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 16:30:17 by pcluchet          #+#    #+#             */
/*   Updated: 2017/03/28 16:30:28 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_ints(int *tab, int len)
{
	int i;
	int j;
	int temp;

	i = len - 1;
	while (i)
	{
		j = 0;
		while (j <= i - 1)
		{
			if ((tab)[i] < (tab)[j])
			{
				temp = (tab)[i];
				(tab)[i] = (tab)[j];
				(tab)[j] = temp;
			}
			j++;
		}
		i--;
	}
}
