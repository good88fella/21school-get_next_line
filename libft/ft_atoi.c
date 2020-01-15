/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktimika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 12:15:34 by ktimika           #+#    #+#             */
/*   Updated: 2019/09/08 18:07:08 by ktimika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_MAX 9223372036854775807ul
#define FT_MIN 9223372036854775808ul

int	ft_atoi(const char *str)
{
	int				i;
	unsigned long	tmp;
	unsigned long	res;
	int				neg;

	i = 0;
	res = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		i++;
	neg = str[i] == '-' ? 1 : 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		tmp = (unsigned long)str[i] - '0';
		if (!neg && (res >= FT_MAX / 10) && (tmp >= FT_MAX % 10))
			return (-1);
		if (neg && (res >= FT_MIN / 10) && (tmp >= FT_MIN % 10))
			return (0);
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (neg ? -res : res);
}
