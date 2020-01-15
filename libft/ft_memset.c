/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktimika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 11:07:35 by ktimika           #+#    #+#             */
/*   Updated: 2019/09/04 13:45:43 by ktimika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *arr;

	arr = (unsigned char*)b;
	while (len > 0)
	{
		*arr = (unsigned char)c;
		arr++;
		len--;
	}
	return (b);
}
