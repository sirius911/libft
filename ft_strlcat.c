/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorin <clorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 09:55:43 by clorin            #+#    #+#             */
/*   Updated: 2020/09/18 10:08:44 by clorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_lenstr(char *dest, size_t size)
{
	size_t		i;

	while (i < size)
	{
		if (dest[i] == 0)
			return (i);
		i++;
	}
	return (size);
}

size_t			ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		len;
	size_t		len_src;

	i = 0;
	len = ft_lenstr(dest, size);
	len_src = ft_strlen(src);
	if (size <= (len + 1))
		return (len + len_src);
	j = ft_strlen(dest);
	while (src[i])
	{
		if (j < size - 1)
			dest[j++] = src[i];
		i++;
	}
	dest[j] = 0;
	return (j + len_src);
}
