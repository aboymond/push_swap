/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:22:36 by aboymond          #+#    #+#             */
/*   Updated: 2022/07/06 18:20:57 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atol(const char *str)
{
	long	i;
	long	res;
	long	negat;

	negat = 1;
	res = 0;
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			negat = negat * (-1);
	}
	while (str[i] && (ft_isdigit(str[i]) == 1))
	{
		if ((res * negat) > INT_MAX || (res * negat) < INT_MIN)
		{
			ft_printf("\033[1;31mError !\n\033[0m");
			exit (0);
		}
		res = res * 10 + str[i++] - '0';
	}
	return (negat * res);
}
