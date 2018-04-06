/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_above_id.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 16:27:55 by pcluchet          #+#    #+#             */
/*   Updated: 2017/03/28 16:31:12 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	list_above_id(t_list *lst, int that)
{
	while (lst)
	{
		if (((t_intid*)lst->content)->id <= that)
			return (0);
		lst = lst->next;
	}
	return (1);
}
