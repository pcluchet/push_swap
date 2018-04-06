/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_r.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 16:28:23 by pcluchet          #+#    #+#             */
/*   Updated: 2017/03/28 16:31:12 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	list_r(t_list **lst, int *increase)
{
	t_list *temp;
	t_list *run;

	if (*lst && (*lst)->next)
	{
		temp = *lst;
		*lst = (*lst)->next;
		run = *lst;
		while (run->next)
			run = run->next;
		run->next = temp;
		run->next->next = NULL;
	}
	(*increase)++;
}
