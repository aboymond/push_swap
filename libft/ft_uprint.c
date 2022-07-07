/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uprint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:19:12 by aboymond          #+#    #+#             */
/*   Updated: 2022/06/16 13:39:42 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(unsigned int n)
{
	unsigned int			i;
	unsigned long int		nb;

	nb = n;
	i = 0;
	if (nb == 0)
		i++;
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

static char	*ft_calcul(unsigned int n)
{
	char					*str;
	unsigned int			i;
	unsigned long int		nb;

	nb = n;
	i = ft_intlen(nb);
	str = (char *)ft_calloc(ft_intlen(nb) + 1, sizeof(char));
	if (!str)
		return (0);
	if (!nb)
	{
		str[0] = '0';
		return (str);
	}
	while (i > 0)
	{
		str[i - 1] = (nb % 10) + '0';
		i--;
		nb /= 10;
	}
	return (str);
}

static char	*ft_uitoa(unsigned int n)
{
	char				*str;
	unsigned long int	nb;

	nb = n;
	str = ft_calcul(nb);
	if (!str)
		return (0);
	str[ft_strlen(str)] = '\0';
	return (str);
}

int	ft_uprint(unsigned int nb)
{
	unsigned int		len;
	char				*num;

	num = ft_uitoa(nb);
	len = ft_putstrf(num);
	free (num);
	return (len);
}
