/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_last_val.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 16:28:09 by pcluchet          #+#    #+#             */
/*   Updated: 2017/03/28 16:31:12 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		list_last_val(t_list *lst)
{
	int ret;

	while (lst && lst->next)
		lst = lst->next;
	ret = ((t_intid*)lst->content)->val;
	return (ret);
}
