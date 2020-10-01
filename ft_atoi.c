/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorin <clorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 11:18:39 by clorin            #+#    #+#             */
/*   Updated: 2020/09/18 11:21:47 by clorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_toobig(int sign, int i, const char *str)
{
	int	nb;

	nb = 0;
	while (str[i++] == '9')
		nb++;
	if (nb >= 19 && sign == 1)
		return (-1);
	else if ( nb >= 19 && sign == -1)
		return (0);
	i -= nb;
	nb = 0;
	while ( ft_isdigit(str[i++]))
		nb++;
	if (nb > 19 && sign == 1)
		return (-1);
	else if (nb > 19 && sign == -1)
		return (0);
	return (1);
}

int		ft_atoi(const char *str)
{
	long	result;
	int	sign;
	int	i;
	int	nb_sign;

	result = 0;
	sign = 0;
	nb_sign = 0;
	i = 0;
	while (ft_isspace((int)str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign++;
		nb_sign++;
		i++;
	}
	if (nb_sign > 1)
		return (0);
	sign = (sign)? -1 : 1;
	if ((result = ft_toobig(sign, i, str)) == 1)
	{
		result = 0;
		while (ft_isdigit(str[i]))
		{
			result = (result * 10) + str[i] - '0';
			i++;
		}
		result = ((int)(sign * result));
	}
	return (result);
}
