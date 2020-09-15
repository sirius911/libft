/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 15:11:44 by clorin            #+#    #+#             */
/*   Updated: 2020/09/14 15:11:48 by clorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*destination;
	const char		*sources;

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