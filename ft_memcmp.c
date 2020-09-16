/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorin <clorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 11:51:19 by clorin            #+#    #+#             */
/*   Updated: 2020/09/16 11:51:42 by clorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char		*str1;
	const char		*str2;

	str1 = (const char *)s1;
	str2 = (const char *)s2;
	if (n == 0)
		return (0);
	return (ft_strncmp(str1, str2, n));
}
