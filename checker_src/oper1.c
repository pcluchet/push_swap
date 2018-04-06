/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/25 20:07:30 by pcluchet          #+#    #+#             */
/*   Updated: 2017/03/02 23:17:54 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	sa(t_checker *env)
{
	t_intid	*temp;

	if (env->ints && env->ints->next)
	{
		temp = (t_intid*)env->ints->content;
		env->ints->content = (t_intid*)(env->ints->next->content);
		env->ints->next->content = temp;
	}
}

void	sb(t_checker *env)
{
	t_intid	*temp;

	if (env->ints_b && env->ints_b->next)
	{
		temp = (t_intid*)env->ints_b->content;
		env->ints_b->content = (t_intid*)(env->ints_b->next->content);
		env->ints_b->next->content = temp;
	}
}

void	ss(t_checker *env)
{
	sa(env);
	sb(env);
}

void	pa(t_checker *env)
{
	t_list	*temp;

	if (env->ints_b)
	{
		temp = env->ints_b;
		env->ints_b = env->ints_b->next;
		temp->next = env->ints;
		env->ints = temp;
	}
}

void	pb(t_checker *env)
{
	t_list	*temp;

	if (env->ints)
	{
		temp = env->ints;
		env->ints = env->ints->next;
		temp->next = env->ints_b;
		env->ints_b = temp;
	}
}
