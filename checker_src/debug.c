/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/25 17:40:08 by pcluchet          #+#    #+#             */
/*   Updated: 2017/03/28 18:20:53 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void		printlist(t_list *lst)
{
	while (lst)
	{
		lst = lst->next;
	}
	ft_printf(" (null)\n");
}

int			count_list(t_list *lst)
{
	int cpt;

	cpt = 0;
	while (lst)
	{
		cpt++;
		lst = lst->next;
	}
	return (cpt);
}

void		init(t_list **pile_a, t_list **pile_b, int *it, t_checker *env)
{
	it[3] = 0;
	it[1] = 0;
	*pile_a = env->ints;
	*pile_b = env->ints_b;
	it[0] = count_list(*pile_a);
	it[2] = count_list(*pile_b);
	if (it[0] < it[2])
	{
		it[3] = 1;
		*pile_a = env->ints_b;
		*pile_b = env->ints;
		it[0] = count_list(*pile_a);
		it[2] = count_list(*pile_b);
	}
	if (it[4])
		ft_printf("%S", L"╟───────────────────────╢\n");
	else
		ft_printf("%S", L"╔═══════════════════════╗\n");
}

void		ifcase(t_list **pile_a, t_list **pile_b, int *it)
{
	int i;
	int j;

	i = ((t_intid*)(*pile_b)->content)->val;
	j = ((t_intid*)(*pile_a)->content)->val;
	if (it[3])
		ft_printf("║%10d   %-10d║\n", i, j);
	else
		ft_printf("║%10d   %-10d║\n", j, i);
	(*pile_b) = (*pile_b)->next;
}

void		print_piles(t_checker *env, char mode)
{
	t_list	*pile_a;
	t_list	*pile_b;
	int		it[6];

	it[4] = mode;
	init(&pile_a, &pile_b, (int*)it, env);
	while (pile_a)
	{
		if (it[1] >= it[0] - it[2])
			ifcase(&pile_a, &pile_b, (int*)it);
		else
		{
			it[5] = ((t_intid*)pile_a->content)->val;
			if (it[3])
				ft_printf("║%10c   %-10d║\n", ' ', it[5]);
			else
				ft_printf("║%10d   %-10c║\n", it[5], ' ');
		}
		it[1]++;
		pile_a = pile_a->next;
	}
	ft_printf("╟───────────────────────╢\n║%10c   %-10c║\n", 'a', 'b');
	ft_printf("%S", L"╚═══════════════════════╝\n\n");
}
