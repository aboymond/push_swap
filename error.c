/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 15:06:10 by aboymond          #+#    #+#             */
/*   Updated: 2022/07/05 19:54:14 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	error(t_ps *ps)
{
	int	i;

	i = 0;
	while (i < ps->compt_a - 1 && ps->a[i] < ps->a[i + 1])
		i++;
	if (i == ps->compt_a - 1)
		exit (EXIT_SUCCESS);
	return (0);
}
