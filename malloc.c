/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:41:56 by piow00            #+#    #+#             */
/*   Updated: 2022/06/29 15:05:27 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	malloc_all(t_ps *ps, int n, int size)
{
	if (n == 0)
	{
		ps->a = malloc(sizeof(int) * size);
		ps->b = malloc(sizeof(int) * size);
		ps->tmp_a = malloc(sizeof(int) * size);
		ps->tmp_tmp = malloc(sizeof(int) * size);
	}
	if (n == 1)
		ps->a = malloc(sizeof(int) * size);
	if (n == 2)
		ps->b = malloc(sizeof(int) * size);
	if (n == 3)
		ps->tmp_a = malloc(sizeof(int) * size);
	if (n == 4)
		ps->tmp_tmp = malloc(sizeof(int) * size);
}

void	free_m(t_ps *ps, int n)
{
	if (n == 0)
	{
		free(ps->a);
		free(ps->b);
		free(ps->tmp_a);
		free(ps->tmp_tmp);
	}
	if (n == 1)
		free(ps->a);
	if (n == 2)
		free(ps->b);
	if (n == 3)
		free(ps->tmp_a);
	if (n == 4)
		free(ps->tmp_tmp);
}
