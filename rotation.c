/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piow00 <piow00@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:11:13 by aboymond          #+#    #+#             */
/*   Updated: 2022/06/23 13:08:22 by piow00           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_ps *ps)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = ps->a[0];
	while (i < ps->compt_a - 1)
	{
		ps->a[i] = ps->a[i + 1];
		i++;
	}
	ps->a[i] = tmp;
	ft_printf("ra\n");
}

void	ft_rb(t_ps *ps)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = ps->b[0];
	while (ps->compt_b - 1)
	{
		ps->b[i] = ps->b[i + 1];
		i++;
	}
	ps->b[i] = tmp;
	ft_printf("rb\n");
}

void	ft_rr(t_ps *ps)
{
	ft_ra(ps);
	ft_rb(ps);
	ft_printf("rr\n");
}
