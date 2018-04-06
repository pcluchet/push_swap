/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_hx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 19:24:54 by pcluchet          #+#    #+#             */
/*   Updated: 2017/01/31 19:24:56 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	ft_to_hx(int k, char maj)
{
	if (k < 10)
		return (k + '0');
	else
		return ((k - 10) + ((maj) ? 'A' : 'a'));
}