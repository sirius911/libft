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

int		ft_atoi(const char *str)
{
	long	result;
	long	sign;

	result = 0;
	sign = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v' ||
		*str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str >= '9')
	{
		result = (result * 10) + *str - '0';
		str++;
	}
	return ((int)(sign * result));
}
