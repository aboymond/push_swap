/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:05:00 by piow00            #+#    #+#             */
/*   Updated: 2022/07/07 12:38:09 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_args(t_ps *ps, int argc, char **argv)
{
	int		i;
	int		y;

	y = 0;
	i = 1;
	check_isdigit(argv);
	if (argc == 1)
		exit (EXIT_SUCCESS);
	if (argc == 2)
		string_conv(ps, argv);
	else if (argc > 2)
	{
		malloc_all(ps, 0, argc - 1);
		while (argv[i])
		{
			ps->a[y] = ft_atol(argv[i]);
			i++;
			y++;
		}
		ps->compt_a = argc - 1;
	}
	ps->compt_b = 0;
}

int	check_isdigit(char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]) || argv[i][j] == '-'
				|| argv[i][j] == ' ')
				j++;
			else
			{
				ft_printf("Error\n");
				exit (0);
			}
		}
		i++;
	}
	return (0);
}
