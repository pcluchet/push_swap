/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lister_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:21:53 by pcluchet          #+#    #+#             */
/*   Updated: 2017/03/28 17:21:55 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

double	ft_specialatoi(char *str)
{
	int		i;
	double	retour;
	char	negatif;

	negatif = 0;
	i = 0;
	retour = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
		negatif = 1;
	if (negatif || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		retour = (retour * 10) + (str[i] - '0');
		i++;
	}
	if (negatif)
		retour *= -1;
	return (retour);
}

char	ft_lstdoesntcontain(t_list *lst, int this)
{
	while (lst)
	{
		if (this == ((t_intid*)lst->content)->val)
			return (0);
		lst = lst->next;
	}
	return (1);
}

char	ft_strisnumber(char *str)
{
	int		i;
	char	nbroccured;

	nbroccured = 0;
	i = ft_strlen(str);
	while (i)
	{
		i--;
		if (!nbroccured)
			nbroccured = ft_isdigit(str[i]);
		if (!ft_isdigit(str[i]) && str[i] != '-' && str[i] != '+')
			return (0);
	}
	return (1 && nbroccured);
}

char	is_valid(char *str, int *write_to, t_checker *env)
{
	double	read;

	if (ft_strisnumber(str))
	{
		read = ft_specialatoi(str);
		if (read == (int)read && ft_lstdoesntcontain(env->ints, read))
		{
			*write_to = (int)read;
			return (1);
		}
	}
	return (0);
}

void	free_split(t_checker *env)
{
	int i;

	i = 0;
	if (env->splitted)
	{
		if (env->splitted[i])
		{
			while (env->splitted[i] != NULL)
			{
				free(env->splitted[i]);
				i++;
			}
		}
		free(env->splitted);
	}
}
