/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktimika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 11:40:21 by ktimika           #+#    #+#             */
/*   Updated: 2019/09/09 11:43:42 by ktimika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		cnt;
	int		len;
	char	tmp;

	cnt = 0;
	len = 0;
	while (str[len])
		len++;
	len--;
	while (cnt < len)
	{
		tmp = str[len];
		str[len] = str[cnt];
		str[cnt] = tmp;
		cnt++;
		len--;
	}
	return (str);
}
