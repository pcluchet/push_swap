/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 16:29:23 by pcluchet          #+#    #+#             */
/*   Updated: 2017/03/28 18:53:36 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char **argv)
{
	t_checker	env;

	get_list(&env, argc, argv);
	set_lstlen(env.ints, &env.lst_len);
	gen_id(&env);
	env.rev_ints = ft_lstclonerev(env.ints);
	env.rev_ints_b = ft_lstclonerev(env.ints_b);
	if (!list_sorted(env.ints))
	{
		if (env.lst_len < 6)
			short_sort(&env);
		else
		{
			pivot_a(&env, ft_sqrt(env.lst_len - 1));
			pivot_b(&env);
		}
	}
	free_everything(&env);
	return (0);
}
