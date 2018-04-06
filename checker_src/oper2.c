/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/25 20:08:24 by pcluchet          #+#    #+#             */
/*   Updated: 2017/02/25 20:13:51 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ra(t_checker *env)
{
	t_list *temp;
	t_list *run;

	if (env->ints && env->ints->next)
	{
		temp = env->ints;
		env->ints = env->ints->next;
		run = env->ints;
		while (run->next)
			run = run->next;
		run->next = temp;
		run->next->next = NULL;
	}
}

void	rb(t_checker *env)
{
	t_list *temp;
	t_list *run;

	if (env->ints_b && env->ints_b->next)
	{
		temp = env->ints_b;
		env->ints_b = env->ints_b->next;
		run = env->ints_b;
		while (run->next)
			run = run->next;
		run->next = temp;
		run->next->next = NULL;
	}
}

void	rr(t_checker *env)
{
	ra(env);
	rb(env);
}

void	rra(t_checker *env)
{
	t_list	*temp;
	t_list	*temp2;
	t_list	*run;

	if (env->ints && env->ints->next)
	{
		run = env->ints;
		temp = run;
		while (run->next && run->next->next)
		{
			run = run->next;
		}
		temp2 = run->next;
		run->next = NULL;
		temp2->next = temp;
		env->ints = temp2;
	}
}

void	rrb(t_checker *env)
{
	t_list	*temp;
	t_list	*temp2;
	t_list	*run;

	if (env->ints_b && env->ints_b->next)
	{
		run = env->ints_b;
		temp = run;
		while (run->next && run->next->next)
		{
			run = run->next;
		}
		temp2 = run->next;
		run->next = NULL;
		temp2->next = temp;
		env->ints_b = temp2;
	}
}
