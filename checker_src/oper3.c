/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angavrel <angavrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/25 20:09:22 by pcluchet          #+#    #+#             */
/*   Updated: 2017/03/28 18:53:10 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rrr(t_checker *env)
{
	rra(env);
	rrb(env);
}

int		list_sorted(t_list *lst)
{
	while (lst && lst->next)
	{
		if (((t_intid*)lst->content)->val > ((t_intid*)lst->next->content)->val)
			return (0);
		lst = lst->next;
	}
	return (1);
}

int		list_max(t_list *lst)
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

char	list_above(t_list *lst, int that)
{
	while (lst)
	{
		if (((t_intid*)lst->content)->val < that)
			return (0);
		lst = lst->next;
	}
	return (1);
}
