/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pivot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 16:27:40 by pcluchet          #+#    #+#             */
/*   Updated: 2017/03/28 16:31:12 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		*get_pivot(t_checker *env, int divide)
{
	int	i;
	int	*ret;

	if (!(ret = (int*)malloc(sizeof(int) * divide)))
		exit(42);
	i = 0;
	while (i < divide)
	{
		ret[i] = (LEN / divide) * (i + 1);
		i++;
	}
	return (ret);
}
