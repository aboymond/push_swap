/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 15:17:45 by aboymond          #+#    #+#             */
/*   Updated: 2022/07/05 19:52:46 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	bit_compt(t_ps *ps)
{
	int	i;
	int	len;

	i = 0;
	len = ps->end_a;
	while (len)
	{
		len = len / 2;
		i++;
	}
	return (i + 1);
}

void	radix(t_ps *ps)
{
	int	i;
	int	y;
	int	len;

	i = -1;
	len = bit_compt(ps);
	while (++i < len && !check_ordre(ps))
	{
		y = ps->compt_a;
		while (y-- > 0)
		{
			if (ps->a[0] >> i & 1)
				ft_ra(ps);
			else
				ft_pb(ps);
		}
		y = ps->compt_b;
		while (ps->compt_b > 0)
			ft_pa(ps);
	}
	y = ps->compt_b;
	while (y-- > 0)
		ft_pa(ps);
}
