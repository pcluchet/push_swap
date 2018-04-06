/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   id_of.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 16:27:49 by pcluchet          #+#    #+#             */
/*   Updated: 2017/03/28 16:31:12 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		id_of(int this_int, int *in_this, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (this_int == in_this[i])
		{
			return (i);
			break ;
		}
		i++;
	}
	return (-1);
}
