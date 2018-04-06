/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_oper_ps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 16:27:11 by pcluchet          #+#    #+#             */
/*   Updated: 2017/03/28 18:54:15 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "checker.h"

static void	oper_loop(t_checker *env, int i)
{
	static t_pai	g_oper[12] =
	{{ .key = "sa", .f = &sa},
			{ .key = "sb", .f = &sb},
			{ .key = "ss", .f = &ss},
			{ .key = "pa", .f = &pa},
			{ .key = "pb", .f = &pb},
			{ .key = "ra", .f = &ra},
			{ .key = "rb", .f = &rb},
			{ .key = "rr", .f = &rr},
			{ .key = "rra", .f = &rra},
			{ .key = "rrb", .f = &rrb},
			{ .key = "rrr", .f = &rrr},
			{ .key = "@", .f = NULL}};

	while (ft_strcmp(g_oper[i].key, "@") != 0)
	{
		if (ft_strcmp(g_oper[i].key, env->line) == 0)
		{
			g_oper[i].f(env);
			break ;
		}
		i++;
	}
}

void		do_oper_ps(t_checker *env, char *oper)
{
	env->line = ft_strdup(oper);
	oper_loop(env, 0);
	free(env->line);
	if (env->rev_ints)
		ft_lstdel(&(env->rev_ints), &destroyer);
	env->rev_ints = ft_lstclonerev(env->ints);
	if (env->rev_ints_b)
		ft_lstdel(&(env->rev_ints_b), &destroyer);
	env->rev_ints_b = ft_lstclonerev(env->ints_b);
	ft_printf("%s\n", oper);
}
