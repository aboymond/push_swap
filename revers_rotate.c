/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revers_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piow00 <piow00@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:16:14 by aboymond          #+#    #+#             */
/*   Updated: 2022/06/28 01:59:28 by piow00           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_ps *ps)
{
	int	tmp;
	int	i;

	i = ps->compt_a - 1;
	tmp = ps->a[ps->compt_a - 1];
	while (i > 0)
	{
		ps->a[i] = ps->a[i - 1];
		i--;
	}
	ps->a[0] = tmp;
	ft_printf("rra\n");
}

void	ft_rrb(t_ps *ps)
{
	int	tmp;
	int	i;

	i = ps->compt_b - 1;
	tmp = ps->b[ps->compt_b - 1];
	while (i > 0)
	{
		ps->b[i] = ps->b[i - 1];
		i--;
	}
	ps->b[0] = tmp;
	ft_printf("rrb\n");
}

void	ft_rrr(t_ps *ps)
{
	ft_rra(ps);
	ft_rrb(ps);
	ft_printf("rrr\n");
}
