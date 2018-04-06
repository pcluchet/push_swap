/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 18:46:33 by pcluchet          #+#    #+#             */
/*   Updated: 2017/03/28 18:48:49 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include "libft.h"
# include <limits.h>

# define MAX(a, b)			b & ((a - b) >> 31) | a & (~(a - b) >> 31)
# define MIN(a, b)			a & ((a - b) >> 31) | b & (~(a - b) >> 31)

/*
** LA list A, LA_NEXT is next item in list A, VA is list A first value,
** VA_LAST is list A last value and VA_AVG is list A average value
*/

# define LA					env->ints
# define LA_NEXT			env->ints->next
# define LA_LAST			((t_intid*)env->rev_ints)->val

# define LB					env->ints_b
# define LB_NEXT			env->ints_b->next
# define LB_NEXT_NEXT		LB && LB_NEXT && env->ints_b->next
# define LB_LAST			((t_intid*)env->rev_ints_b)->val

# define VA					((t_intid*)env->ints->content)->val
# define VA_ID					((t_intid*)env->ints->content)->id
# define VA_NEXT			((t_intid*)env->ints->next->content)->val
# define VA_NEXT_ID				((t_intid*)env->ints->next->content)->id
# define VA_LAST			((t_intid*)env->rev_ints->content)->val
# define VA_LAST_ID			((t_intid*)env->rev_ints->content)->id

# define VB					((t_intid*)env->ints_b->content)->val
# define VB_ID				((t_intid*)env->ints_b->content)->id
# define VB_NEXT			((t_intid*)env->ints_b->next->content)->val
# define VB_NEXT_ID			((t_intid*)env->ints_b->next->content)->id
# define VB_LAST			((t_intid*)env->rev_ints_b->content)->val

# define AVG				env->lst_avg
# define LEN				env->lst_len
# define MID				env->localints[env->lst_median_id]

/*
** push_swap operations, only one at a time
*/

# define FLAG_RR			flag |= 64
# define FLAG_R				flag |= 32
# define FLAG_S				flag |= 16
# define FLAG_SB			flag |= 8
# define FLAG_RRA			flag |= 4
# define FLAG_RA			flag |= 2
# define FLAG_SA			flag |= 1

# define DO_RR				do_oper_ps(env,"rrr")
# define DO_R				do_oper_ps(env,"rr")
# define DO_S				do_oper_ps(env,"ss")

# define DO_RRA				do_oper_ps(env,"rra")
# define DO_RA				do_oper_ps(env,"ra")
# define DO_SA				do_oper_ps(env,"sa")

# define DO_RRB				do_oper_ps(env,"rrb")
# define DO_RB				do_oper_ps(env,"rb")
# define DO_SB				do_oper_ps(env,"sb")

# define DO_PA				do_oper_ps(env,"pa")
# define DO_PB				do_oper_ps(env,"pb")

typedef struct		s_checker
{
	t_list			*ints;
	t_list			*ints_b;
	t_list			*rev_ints;
	t_list			*rev_ints_b;
	char			*line;
	char			**splitted;
	char			disp_color;
	char			disp_stack;
	int				nb_oper;
	int				lst_avg;
	int				lst_len;
	int				lst_median_id;
	int				*localints;
}					t_checker;

typedef struct		s_pai
{
	char			*key;
	void			(*f)(t_checker*);
}					t_pai;

typedef struct		s_intid
{
	int				id;
	int				val;
}					t_intid;

void				free_split(t_checker *env);
void				short_sort(t_checker *env);
void				get_list(t_checker *env, int argc, char **argv);
int					list_sorted(t_list *lst);
void				printlist(t_list *lst);
void				print_piles(t_checker *env, char mode);
void				sa(t_checker *env);
void				sb(t_checker *env);
void				ss(t_checker *env);
void				pa(t_checker *env);
void				pb(t_checker *env);
void				ra(t_checker *env);
void				rb(t_checker *env);
void				rr(t_checker *env);
void				rra(t_checker *env);
void				rrb(t_checker *env);
void				rrr(t_checker *env);
int					list_max(t_list *lst);
char				list_above(t_list *lst, int that);
double				ft_specialatoi(char *str);
char				ft_lstdoesntcontain(t_list *lst, int this);
char				ft_strisnumber(char *str);
char				is_valid(char *str, int *write_to, t_checker *env);

#endif
