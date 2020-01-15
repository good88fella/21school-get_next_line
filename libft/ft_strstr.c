/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktimika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 20:57:17 by ktimika           #+#    #+#             */
/*   Updated: 2019/09/05 10:48:27 by ktimika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int i;
	unsigned int j;
	unsigned int len;

	len = 0;
	while (needle[len])
		len++;
	if (len == 0)
		return ((char*)haystack);
	i = 0;
	j = 0;
	while (haystack[i])
	{
		while (haystack[i + j] == needle[j])
		{
			if (j == len - 1)
				return ((char*)haystack + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
