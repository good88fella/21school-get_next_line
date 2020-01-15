/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktimika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:20:32 by ktimika           #+#    #+#             */
/*   Updated: 2019/09/05 19:26:41 by ktimika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	unsigned const char	*s;
	size_t				i;

	if (dst == NULL && src == NULL)
		return (NULL);
	d = (unsigned char*)dst;
	s = (unsigned const char*)src;
	if (d <= s)
	{
		i = -1;
		while (++i < len)
			d[i] = s[i];
	}
	else
	{
		i = len + 1;
		while (--i > 0)
			d[i - 1] = s[i - 1];
	}
	return (dst);
}
