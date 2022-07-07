/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:27:47 by aboymond          #+#    #+#             */
/*   Updated: 2022/07/06 17:36:42 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_ps	ps;

	init_struct(&ps);
	check_args(&ps, argc, argv);
	check_double(&ps);
	error(&ps);
	tab_tmp_new(&ps);
	pre_tri(&ps);
	indexage(&ps);
	pre_radix(&ps);
	free_m(&ps, 0);
	return (0);
}

void	init_struct(t_ps *ps)
{
	ps->compt_a = 0;
	ps->compt_b = 0;
}

void	string_conv(t_ps *ps, char **argv)
{
	char	**tmp;
	int		i;

	i = -1;
	argv++;
	tmp = ft_split(*argv, ' ');
	while (tmp[++i])
		;
	if (i == 0)
		exit (0);
	malloc_all(ps, 0, i);
	ps->compt_a = i;
	i = -1;
	while (tmp[++i])
	{
		ps->a[i] = ft_atol(tmp[i]);
	}
	i = -1;
	while (++i < ps->compt_a)
		free (tmp[i]);
	free (tmp);
}

void	pre_tri(t_ps *ps)
{
	int	i;
	int	tmp;
	int	ok;

	ok = 1;
	tmp = 0;
	i = -1;
	while (ok != 0)
	{
		while (++i < ps->compt_a - 1)
		{
			if (ps->tmp_a[i] > ps->tmp_a[i + 1])
			{
				tmp = ps->tmp_a[i];
				ps->tmp_a[i] = ps->tmp_a[i + 1];
				ps->tmp_a[i + 1] = tmp;
				i = ps->compt_a + 1;
				ok = 1;
			}
			else
				ok = 0;
		}
		i = -1;
	}
	i = 0;
}

void	indexage(t_ps *ps)
{
	int	i;
	int	y;
	int	index;

	index = 0;
	y = -1;
	i = -1;
	while (++i < ps->compt_a)
	{
		while (++y < ps->compt_a)
		{
			if (ps->tmp_a[i] == ps->a[y])
			{
				ps->tmp_tmp[y] = index;
				index++;
			}
		}
		y = -1;
	}
	i = -1;
	while (++i < ps->compt_a)
	{
		ps->a[i] = ps->tmp_tmp[i];
	}
}
