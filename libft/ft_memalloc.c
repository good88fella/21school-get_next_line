/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktimika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:06:52 by ktimika           #+#    #+#             */
/*   Updated: 2019/09/05 20:16:50 by ktimika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void			*mem;
	size_t			i;
	unsigned char	*tmp;

	if (!(mem = malloc(size)))
		return (NULL);
	tmp = (unsigned char*)mem;
	i = 0;
	while (i < size)
	{
		tmp[i] = 0;
		i++;
	}
	return (mem);
}
