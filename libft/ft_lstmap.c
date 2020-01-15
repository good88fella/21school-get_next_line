/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktimika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 20:13:01 by ktimika           #+#    #+#             */
/*   Updated: 2019/09/09 11:31:30 by ktimika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	del(void *content, size_t content_size)
{
	ft_memdel(&content);
	(void)content_size;
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *newlst;
	t_list *elmnt;
	t_list *res;

	if (lst == NULL || f == NULL)
		return (NULL);
	res = f(lst);
	if (!(newlst = ft_lstnew(res->content, res->content_size)))
		return (NULL);
	elmnt = newlst;
	elmnt->next = NULL;
	lst = lst->next;
	while (lst)
	{
		res = f(lst);
		if (!(elmnt->next = ft_lstnew(res->content, res->content_size)))
		{
			ft_lstdel(&newlst, &del);
			return (NULL);
		}
		elmnt = elmnt->next;
		elmnt->next = NULL;
		lst = lst->next;
	}
	return (newlst);
}
