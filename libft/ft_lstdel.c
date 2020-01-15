/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktimika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 19:14:49 by ktimika           #+#    #+#             */
/*   Updated: 2019/09/09 11:32:04 by ktimika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *elem;
	t_list *nelem;

	if (alst != NULL && del != NULL)
	{
		elem = *alst;
		while (elem)
		{
			nelem = elem->next;
			del(elem->content, elem->content_size);
			ft_memdel((void **)&elem);
			elem = nelem;
		}
		*alst = NULL;
	}
}
