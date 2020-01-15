/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktimika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 12:46:21 by ktimika           #+#    #+#             */
/*   Updated: 2019/09/08 15:11:13 by ktimika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	bit_number(int n)
{
	int cnt;

	cnt = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
	{
		n /= -10;
		cnt++;
	}
	n = n < 0 ? n * -1 : n;
	while (n > 0)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

static int	ten_to_the_power(int p)
{
	int	res;

	res = 1;
	while (p > 1)
	{
		res *= 10;
		p--;
	}
	return (res);
}

static void	fill_in_the_line(char *res, int n, int num_len)
{
	int		i;
	int		del;

	i = 0;
	del = num_len;
	if (n < 0)
	{
		res[0] = '-';
		i = 1;
		del = num_len - 1;
		if (n == -2147483648)
		{
			res[1] = n / -ten_to_the_power(del) + '0';
			i++;
			del--;
			n = -147483648;
		}
		n = -n;
	}
	while (i < num_len)
	{
		res[i] = n / ten_to_the_power(del) % 10 + '0';
		i++;
		del--;
	}
}

char		*ft_itoa(int n)
{
	int		num_len;
	char	*res;

	num_len = n < 0 ? bit_number(n) + 1 : bit_number(n);
	if (!(res = ft_strnew(num_len)))
		return (NULL);
	fill_in_the_line(res, n, num_len);
	return (res);
}
