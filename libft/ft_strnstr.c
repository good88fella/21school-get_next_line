/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktimika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 21:17:23 by ktimika           #+#    #+#             */
/*   Updated: 2019/09/05 17:11:03 by ktimika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t length;

	length = 0;
	while (needle[length])
		length++;
	if (length == 0)
		return ((char*)haystack);
	i = 0;
	j = 0;
	while (haystack[i])
	{
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (j == length - 1)
				return ((char*)haystack + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
