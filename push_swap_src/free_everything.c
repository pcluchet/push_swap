/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_everything.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 16:27:21 by pcluchet          #+#    #+#             */
/*   Updated: 2017/03/28 16:31:12 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_everything(t_checker *env)
{
	if (env->ints)
		ft_lstdel(&env->ints, &destroyer);
	if (env->ints_b)
		ft_lstdel(&env->ints_b, &destroyer);
	if (env->rev_ints)
		ft_lstdel(&env->rev_ints, &destroyer);
	if (env->rev_ints_b)
		ft_lstdel(&env->rev_ints_b, &destroyer);
	free(env->localints);
}
