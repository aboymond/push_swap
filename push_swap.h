/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:34:28 by aboymond          #+#    #+#             */
/*   Updated: 2022/07/06 19:01:52 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include "./libft/libft.h"

typedef struct s_ps
{
	int	*a;
	int	*b;
	int	*tmp_a;
	int	*tmp_b;
	int	*tmp_tmp;
	int	compt_a;
	int	compt_b;
	int	end_a;
	int	end_b;

}t_ps;

int		error(t_ps *ps);
void	check_double(t_ps *ps);
void	string_conv(t_ps *ps, char **argv);
void	pre_tri(t_ps *ps);
void	pre_pre_tri(t_ps *ps, int tmp, int y);
void	tab_tmp_new(t_ps *ps);
void	indexage(t_ps *ps);
void	free_m(t_ps *ps, int n);
void	check_args(t_ps *ps, int argc, char **argv);
void	malloc_all(t_ps *ps, int n, int size);
void	init_struct(t_ps *ps);
void	pb_stack_a(t_ps *ps);
void	pa_stack_b(t_ps *ps);
void	pre_radix(t_ps *ps);
void	pre_tri_radix_3(t_ps *ps);
void	pre_tri_radix_4(t_ps *ps);
void	pre_tri_radix_5(t_ps *ps);
void	big_num_up(t_ps *ps);
void	radix(t_ps *ps);
int		check_isdigit(char **argv);

int		check_ordre(t_ps *ps);
int		big_num(t_ps *ps);
int		bit_compt(t_ps *ps);

void	ft_sa(t_ps *ps);
void	ft_sb(t_ps *ps);
void	ft_ss(t_ps *ps);

void	ft_pa(t_ps *ps);
void	ft_pb(t_ps *ps);

void	ft_ra(t_ps *ps);
void	ft_rb(t_ps *ps);
void	ft_rr(t_ps *ps);

void	ft_rra(t_ps *ps);
void	ft_rrb(t_ps *ps);
void	ft_rrr(t_ps *ps);

#endif
