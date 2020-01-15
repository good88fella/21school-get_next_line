/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktimika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 13:14:53 by ktimika           #+#    #+#             */
/*   Updated: 2019/09/06 13:51:26 by ktimika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (!(sub = (char*)malloc(sizeof(*sub) * (len + 1))))
		return (NULL);
	s += start;
	i = len;
	while (i--)
	{
		*sub = *s;
		sub++;
		s++;
	}
	*sub = '\0';
	return (sub - len);
}
