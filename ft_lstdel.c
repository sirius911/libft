/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorin <clorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 17:47:58 by clorin            #+#    #+#             */
/*   Updated: 2020/09/27 17:51:26 by clorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*temp;
	t_list		*next;

	temp = *alst;
	if (del != NULL)
	{
		while (temp)
		{
			next = temp->next;
			(*del)(temp->content, temp->content_size);
			free(temp);
			temp = next;
		}
		*alst = NULL;
	}
}
