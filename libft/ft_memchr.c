/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktimika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:56:43 by ktimika           #+#    #+#             */
/*   Updated: 2019/09/04 14:29:37 by ktimika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char *src;

	src = (unsigned const char*)s;
	while (n--)
	{
		if (*src == (unsigned char)c)
			return ((void*)src);
		src++;
	}
	return (NULL);
}
