/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_id.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 16:27:36 by pcluchet          #+#    #+#             */
/*   Updated: 2017/03/28 16:31:12 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	gen_id(t_checker *env)
{
	t_list	*ptr;
	int		i;

	i = 0;
	ptr = env->ints;
	if (!(env->localints = (int *)malloc(sizeof(int) * (env->lst_len + 1))))
	{
		return ;
	}
	while (ptr)
	{
		env->localints[i] = ((t_intid*)ptr->content)->val;
		ptr = ptr->next;
		i++;
	}
	sort_ints(env->localints, i);
	env->lst_median_id = env->lst_len / 2;
	attrib_id(env, env->localints, i);
}
