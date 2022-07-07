/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_s_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 00:31:23 by piow00            #+#    #+#             */
/*   Updated: 2022/07/06 18:12:30 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_ordre(t_ps *ps)
{
	int	i;

	i = 0;
	while (i < ps->compt_a - 1 && ps->a[i] < ps->a[i + 1])
		i++;
	if (i == ps->compt_a - 1)
	{
		return (1);
	}
	return (0);
}

void	big_num_up(t_ps *ps)
{
	int	y;

	while (big_num(ps) != 0)
	{
		y = big_num(ps);
		if (y > ps->compt_a / 2)
		{
			if (y == ps->compt_a)
			{
				ft_rra(ps);
				y = 0;
			}
			else
			{
				ft_rra(ps);
				y++;
			}
		}
		else
		{
			ft_ra(ps);
			y--;
		}		
	}
}

int	big_num(t_ps *ps)
{
	int	i;
	int	y;

	i = 1;
	y = 0;
	while (i < ps->compt_a)
	{
		if (ps->a[i] > ps->a[y])
			y = i;
		i++;
	}
	return (y);
}

void	check_double(t_ps *ps)
{
	int	i;
	int	y;

	i = 0;
	while (i != ps->compt_a)
	{
		y = i + 1;
		while (y != ps->compt_a)
		{
			if (ps->a[i] == ps->a[y])
			{
				ft_printf("\033[1;31mError !\n\033[0m");
				exit (EXIT_SUCCESS);
			}
			y++;
		}
		i++;
	}
}

void	tab_tmp_new(t_ps *ps)
{
	int	i;

	i = 0;
	while (i < ps->compt_a)
	{
		ps->tmp_a[i] = ps->a[i];
		i++;
	}
}
