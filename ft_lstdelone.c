/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorin <clorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 17:29:43 by clorin            #+#    #+#             */
/*   Updated: 2020/09/27 17:39:58 by clorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdelone(t_list **alist, void (*del)(void *))
{
	if (alist != NULL && del != NULL)
	{
		(*del)((**alist).content);
		free(*alist);
		*alist = NULL;
	}
}
