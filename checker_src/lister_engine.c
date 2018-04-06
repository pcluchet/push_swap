/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/25 16:40:08 by pcluchet          #+#    #+#             */
/*   Updated: 2017/03/02 23:11:14 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		cpt_split(char **tab)
{
	int i;

	i = 0;
	if (tab)
	{
		while (tab[i])
			i++;
	}
	return (i - 1);
}

char	try_split(char *str, t_checker *env)
{
	int		i;
	int		read;
	t_intid	itid;

	env->splitted = ft_strsplit(str, ' ');
	i = cpt_split(env->splitted);
	if (env->splitted)
	{
		while (i + 1)
		{
			if (is_valid(env->splitted[i], &read, env))
			{
				itid = (t_intid){.id = -1, .val = read};
				ft_lstadd(&(env->ints), ft_lstnew(&itid, sizeof(t_intid)));
			}
			else
				return (0);
			i--;
		}
	}
	free_split(env);
	return (1);
}

char	is_arg(char *str, t_checker *env)
{
	if (ft_strcmp(str, "-c") == 0)
	{
		env->disp_color = 1;
		return (1);
	}
	if (ft_strcmp(str, "-v") == 0)
	{
		env->disp_stack = 1;
		return (1);
	}
	if (ft_strcmp(str, "-cv") == 0 || ft_strcmp(str, "-vc") == 0)
	{
		env->disp_color = 1;
		env->disp_stack = 1;
		return (1);
	}
	return (0);
}

void	error(void)
{
	ft_printf("Error\n");
	exit(1);
}

void	get_list(t_checker *env, int argc, char **argv)
{
	int		i;
	int		read;
	t_intid	itid;

	env->ints = NULL;
	env->ints_b = NULL;
	i = argc - 1;
	(i == 0) ? error() : 0;
	while (i > 0)
	{
		if (is_valid(argv[i], &read, env))
		{
			itid = (t_intid){.id = -1, .val = read};
			ft_lstadd(&(env->ints), ft_lstnew(&itid, sizeof(t_intid)));
		}
		else if (try_split(argv[i], env))
		{
		}
		else if (!is_arg(argv[i], env))
		{
			ft_printf("Error\n");
			exit(1);
		}
		i--;
	}
}
