/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:09:11 by aboymond          #+#    #+#             */
/*   Updated: 2022/07/05 19:50:22 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(t_ps *ps)
{
	int	i;

	i = ps->compt_b;
	if (ps->compt_a == 0)
		return ;
	if (ps->compt_b == 0)
	{
		ps->compt_b++;
		ps->b[0] = ps->a[0];
	}
	else
	{
		while (i > 0)
		{
			ps->b[i] = ps->b[i - 1];
			i--;
		}
		ps->compt_b++;
		ps->b[0] = ps->a[0];
	}
	pb_stack_a(ps);
	ft_printf("pb\n");
}

void	pb_stack_a(t_ps *ps)
{
	int	i;

	free_m(ps, 4);
	malloc_all(ps, 4, ps->compt_a);
	i = -1;
	while (++i < ps->compt_a)
	{
		ps->tmp_tmp[i] = ps->a[i];
	}
	ps->compt_a--;
	i = -1;
	if (ps->compt_a == 0)
	{
		free_m(ps, 1);
		malloc_all(ps, 1, ps->compt_b);
	}
	while (++i < ps->compt_a)
	{
		ps->a[i] = ps->tmp_tmp[i + 1];
	}
	i = -1;
	while (++i < ps->compt_a)
	{
		ps->tmp_tmp[i] = ps->b[i];
	}
}

void	ft_pa(t_ps *ps)
{
	int	i;

	i = ps->compt_a;
	if (ps->compt_b == 0)
		return ;
	if (ps->compt_a == 0)
	{
		ps->compt_a++;
		ps->a[0] = ps->b[0];
	}
	else
	{
		while (i > 0)
		{
			ps->a[i] = ps->a[i - 1];
			i--;
		}
		ps->compt_a++;
		ps->a[0] = ps->b[0];
	}
	pa_stack_b(ps);
	ft_printf("pa\n");
}

void	pa_stack_b(t_ps *ps)
{
	int	i;

	free_m(ps, 4);
	malloc_all(ps, 4, ps->compt_b);
	i = -1;
	while (++i < ps->compt_b)
	{
		ps->tmp_tmp[i] = ps->b[i];
	}
	ps->compt_b--;
	i = -1;
	if (ps->compt_b == 0)
	{
		free_m(ps, 2);
		malloc_all(ps, 2, ps->compt_a);
	}
	while (++i < ps->compt_b)
	{
		ps->b[i] = ps->tmp_tmp[i + 1];
	}
}
