/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharrive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 16:10:06 by tharrive          #+#    #+#             */
/*   Updated: 2017/11/21 16:06:33 by tharrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem))
{
	t_list *news;
	t_list *newone;

	newone = f(lst);
	news = newone;
	if (newone == NULL)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
		newone->next = f(lst);
		if (newone->next == NULL)
			return (NULL);
		newone = newone->next;
	}
	return (news);
}
