/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharrive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 14:39:30 by tharrive          #+#    #+#             */
/*   Updated: 2017/12/14 14:57:05 by tharrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*remove(t_list *lst, void *ptr)
{
	t_list		*tmp;

	if (!lst)
		return (NULL);
	if (lst->content == ptr)
	{
		tmp = lst->next;
		ft_memdel((void **)&lst);
		return (tmp);
	}
	lst->next = remove(lst->next, ptr);
	return (lst);
}

void			ft_lstremove(t_list **lst, void *ptr)
{
	*lst = remove(*lst, ptr);
}
