/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_tri_radix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 23:41:05 by piow00            #+#    #+#             */
/*   Updated: 2022/07/05 19:56:46 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pre_radix(t_ps *ps)
{
	int	i;

	i = -1;
	ps->end_a = ps->compt_a;
	if (ps->compt_a == 2)
		ft_sa(ps);
	if (ps->compt_a == 3)
		pre_tri_radix_3(ps);
	if (ps->compt_a == 4)
		pre_tri_radix_4(ps);
	if (ps->compt_a == 5)
		pre_tri_radix_5(ps);
	if (ps->compt_a > 5)
		radix(ps);
}

void	pre_tri_radix_3(t_ps *ps)
{
	while (check_ordre(ps) == 0)
	{
		if (ps->a[0] > ps->a[2])
			ft_ra(ps);
		else if (ps->a[0] > ps->a[1]
			|| (ps->a[1] > ps->a[2] && ps->a[1] > ps->a[0]))
			ft_sa(ps);
		else if (ps->a[2] < ps->a[1] && ps->a[2] < ps->a[0])
			ft_rra(ps);
	}
}

void	pre_tri_radix_4(t_ps *ps)
{
	big_num_up(ps);
	ft_pb(ps);
	pre_tri_radix_3(ps);
	ft_pa(ps);
	ft_ra(ps);
}

void	pre_tri_radix_5(t_ps *ps)
{
	big_num_up(ps);
	ft_pb(ps);
	pre_tri_radix_4(ps);
	ft_pa(ps);
	ft_ra(ps);
}
