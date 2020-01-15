/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktimika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 20:18:48 by ktimika           #+#    #+#             */
/*   Updated: 2019/09/05 17:11:38 by ktimika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*lastchr;
	int		len;
	int		i;

	lastchr = NULL;
	len = 0;
	while (s[len])
		len++;
	len++;
	i = 0;
	while (i < len)
	{
		if (*s == (unsigned char)c)
			lastchr = (char*)s;
		s++;
		i++;
	}
	return (lastchr);
}
