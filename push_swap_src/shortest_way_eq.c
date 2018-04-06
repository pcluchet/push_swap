/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shortest_way_eq.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 16:30:13 by pcluchet          #+#    #+#             */
/*   Updated: 2017/03/28 16:31:12 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	shortest_way_eq(t_list *lst, int eq_to_that)
{
	int		sens_rr;
	int		sens_r;
	t_list	*backup;
	t_list	*ptr;

	backup = ft_lstclonerev(lst);
	ptr = backup;
	backup = ft_lstclonerev(backup);
	ft_lstdel(&ptr, &destroyer);
	sens_rr = 0;
	while (((t_intid*)backup->content)->id != eq_to_that)
		list_rr(&backup, &sens_rr);
	ft_lstdel(&backup, &destroyer);
	backup = ft_lstclonerev(lst);
	ptr = backup;
	backup = ft_lstclonerev(backup);
	ft_lstdel(&ptr, &destroyer);
	sens_r = 0;
	while (((t_intid*)backup->content)->id != eq_to_that)
		list_r(&backup, &sens_r);
	ft_lstdel(&backup, &destroyer);
	if (sens_r < sens_rr)
		return ('U');
	else
		return ('D');
}
