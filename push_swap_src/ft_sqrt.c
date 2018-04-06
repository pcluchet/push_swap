/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 16:27:33 by pcluchet          #+#    #+#             */
/*   Updated: 2017/03/28 16:31:12 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

float	ft_sqrt(float num)
{
	float	guess;
	float	e;
	float	upperbound;

	guess = 1;
	e = 0.001;
	upperbound = num / guess;
	guess = (upperbound + guess) / 2;
	while (!(guess * guess >= num - e && guess * guess <= num + e))
	{
		upperbound = num / guess;
		guess = (upperbound + guess) / 2;
	}
	return (guess);
}
