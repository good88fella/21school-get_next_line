/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktimika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 20:07:39 by ktimika           #+#    #+#             */
/*   Updated: 2019/09/09 10:56:10 by ktimika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *elmnt;

	if (lst != NULL && f != NULL)
	{
		elmnt = lst;
		while (elmnt)
		{
			f(elmnt);
			elmnt = elmnt->next;
		}
	}
}
