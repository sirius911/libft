/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorin <clorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 13:30:36 by clorin            #+#    #+#             */
/*   Updated: 2020/09/22 13:57:18 by clorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char const c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s, char const *set)
{
	size_t		min;
	size_t		max;

	if (!s)
		return (NULL);
	min = 0;
	while (s[min] && is_in_set(s[min], set))
	//while (s[min] && (s[min] == ' ' || s[min] == '\n' || s[min] == '\t'))
		min++;
	max = ft_strlen(s);
	while (min < max && is_in_set(s[max - 1], set))
//	while (min < max && (s[max - 1] == ' ' || s[max - 1] == '\n' ||
//		s[max - 1] == '\t'))
		max--;
	if (min == max)
		return (ft_strnew(1));
	return (ft_substr(s, min, (max - min)));
}
