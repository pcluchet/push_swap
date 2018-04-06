/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 18:49:12 by pcluchet          #+#    #+#             */
/*   Updated: 2017/03/28 18:49:24 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"
# include "checker.h"

void	destroyer(void *ptr, size_t size);
t_list	*ft_lstclonerev(t_list *lst);
void	set_lstlen(t_list *lst, int *n);
void	do_oper_ps(t_checker *env, char *oper);
void	printints(int *tab, int len);
void	sort_ints(int *tab, int len);
int		id_of(int this_int, int *in_this, int len);
void	attrib_id(t_checker *env, int *tab, int len);
void	gen_id(t_checker *env);
float	ft_sqrt(float num);
int		*get_pivot(t_checker *env, int divide);
void	list_r(t_list **lst, int *increase);
void	list_rr(t_list **lst, int *increase);
char	shortest_way_eq(t_list	*lst, int eq_to_that);
void	list_delfirst(t_list **lst);
char	list_above_id(t_list *lst, int that);
void	do_classic_a(t_checker *env, int *pivots, int i);
void	pivot_a(t_checker *env, int divide);
void	pivot_b(t_checker *env);
int		cnt_list(t_list *lst);
int		list_last_id(t_list	*lst);
int		list_last_val(t_list	*lst);
int		list_maxi(t_list	*lst);
void	short_sort_a(t_checker *env);
void	barely_short_sort(t_checker *env);
void	short_sort(t_checker *env);
void	free_everything(t_checker *env);
#endif
