/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_rr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 16:28:29 by pcluchet          #+#    #+#             */
/*   Updated: 2017/03/28 16:28:56 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	list_rr(t_list **lst, int *increase)
{
	t_list	*temp;
	t_list	*temp2;
	t_list	*run;

	if (*lst && (*lst)->next)
	{
		run = *lst;
		temp = run;
		while (run->next && run->next->next)
		{
			run = run->next;
		}
		temp2 = run->next;
		run->next = NULL;
		temp2->next = temp;
		*lst = temp2;
	}
	(*increase)++;
}
