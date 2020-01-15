/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printarray.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktimika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 11:48:36 by ktimika           #+#    #+#             */
/*   Updated: 2019/09/09 11:51:31 by ktimika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printarray(const int *arr, size_t size)
{
	while (size--)
	{
		ft_putnbr(*arr);
		ft_putchar(' ');
		arr++;
	}
	ft_putchar('\n');
}
