/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorin <clorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 18:17:38 by clorin            #+#    #+#             */
/*   Updated: 2020/09/27 18:21:43 by clorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*new_lst;

	if (f != NULL && lst != NULL)
	{
		new_lst = (*f)(lst);
		if (new_lst && lst->next)
			new_lst->next = ft_lstmap(lst->next, f);
		return (new_lst);
	}
	return (NULL);
}
