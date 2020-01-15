/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktimika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 14:25:18 by ktimika           #+#    #+#             */
/*   Updated: 2019/09/06 17:08:27 by ktimika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*res;
	size_t	first_index;
	size_t	end_index;
	size_t	len;

	if (s == NULL)
		return (NULL);
	first_index = 0;
	end_index = ft_strlen(s) == 0 ? 0 : ft_strlen(s) - 1;
	while (s[first_index] == ' ' || s[first_index] == '\t' ||
			s[first_index] == '\n')
		first_index++;
	first_index = first_index - 1 == end_index ? 0 : first_index;
	while (s[end_index] == ' ' || s[end_index] == '\t' ||
			s[end_index] == '\n')
		end_index--;
	end_index++;
	len = end_index - first_index;
	if (!(res = ft_strnew(len)))
		return (NULL);
	ft_strncpy(res, s + first_index, len);
	return (res);
}
