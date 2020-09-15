/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorin <clorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 14:41:39 by clorin            #+#    #+#             */
/*   Updated: 2020/09/15 14:44:30 by clorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*destination;
	const char	*sources;

	i = 0;
	destination = (char *)dest;
	sources = (char *)src;
	while (i < n)
	{
		destination[i] = sources[i];
		i++;
	}
	return (dest);
}
