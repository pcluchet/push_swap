/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/25 16:40:08 by pcluchet          #+#    #+#             */
/*   Updated: 2017/03/28 18:38:26 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_pai	*oper_help(int *setzero)
{
	static	t_pai g_oper[12] =
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

	*setzero = 0;
	return ((t_pai*)g_oper);
}

void	do_oper(t_checker *env)
{
	int		i;
	int		j;
	t_pai	*g_oper;

	g_oper = oper_help(&i);
	while (ft_strcmp(g_oper[i].key, "@") != 0)
	{
		if (ft_strcmp(g_oper[i].key, env->line) == 0)
		{
			if (env->disp_stack)
			{
				ft_printf("%S", L"╔═══════════════════════╗\n");
				j = env->nb_oper;
				ft_printf("║ Operation #%3d : %3s  ║\n", j, env->line);
			}
			g_oper[i].f(env);
			break ;
		}
		i++;
	}
	if (ft_strcmp(g_oper[i].key, "@") == 0)
	{
		ft_printf("Error\n");
		exit(2);
	}
}

int		main(int argc, char **argv)
{
	t_checker	env;

	if (argc == 1)
		exit(2);
	env.ints_b = NULL;
	env.disp_color = 0;
	env.disp_stack = 0;
	env.nb_oper = 0;
	get_list(&env, argc, argv);
	if (env.disp_stack)
		print_piles(&env, 0);
	while (get_next_line(0, &env.line))
	{
		env.nb_oper++;
		do_oper(&env);
		if (env.disp_stack)
			print_piles(&env, 1);
		free(env.line);
	}
	if (list_sorted(env.ints) && !env.ints_b)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}
