/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   attrib_id.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 16:26:02 by pcluchet          #+#    #+#             */
/*   Updated: 2017/03/28 16:26:18 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	attrib_id(t_checker *env, int *tab, int len)
{
	t_list	*ptr;
	int		k;

	ptr = env->ints;
	while (ptr)
	{
		k = id_of(((t_intid*)ptr->content)->val, tab, len);
		((t_intid*)ptr->content)->id = k;
		if (((t_intid*)ptr->content)->id == -1)
		{
			ft_printf("error in id routine (this shouldn't happen)\n");
			exit(2);
		}
		ptr = ptr->next;
	}
}
