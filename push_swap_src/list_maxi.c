/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_maxi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 16:32:43 by pcluchet          #+#    #+#             */
/*   Updated: 2017/03/28 16:32:44 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		list_maxi(t_list *lst)
{
	int ret;

	ret = INT_MIN;
	while (lst)
	{
		if (((t_intid*)lst->content)->val > ret)
			ret = ((t_intid*)lst->content)->val;
		lst = lst->next;
	}
	return (ret);
}
