/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktimika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 17:11:09 by ktimika           #+#    #+#             */
/*   Updated: 2019/09/08 17:31:40 by ktimika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	omit_delimeter(const char *s, char c, size_t i)
{
	while (s[i] == c)
		i++;
	i--;
	return (i);
}

static char	**get_memory_area(char const *s, char c, size_t len)
{
	char	**arr;
	size_t	i;
	size_t	j;
	int		cnt;

	i = -1;
	j = 0;
	cnt = 0;
	while (++i <= len)
	{
		if (s[i] == c || (s[i] == '\0' && s[i - 1] != c))
		{
			if (s[i] != '\0')
				i = omit_delimeter(s, c, i);
			if (j != 0)
				cnt++;
			j = 0;
		}
		else
			j++;
	}
	if (!(arr = (char**)malloc(sizeof(*arr) * (cnt + 1))))
		return (NULL);
	arr[cnt] = NULL;
	return (arr);
}

static void	*free_memory(char **arr, int cnt)
{
	while (cnt)
		free(arr[--cnt]);
	free(arr);
	return (NULL);
}

static char	**get_memory(char const *s, char c, size_t len)
{
	char	**arr;
	size_t	i;
	size_t	j;
	int		cnt;

	if (!(arr = get_memory_area(s, c, len)))
		return (NULL);
	i = -1;
	j = 0;
	cnt = -1;
	while (++i <= len)
	{
		if (s[i] == c || (s[i] == '\0' && s[i - 1] != c))
		{
			if (s[i] != '\0')
				i = omit_delimeter(s, c, i);
			if (j != 0)
				if (!(arr[++cnt] = ft_strnew(j)))
					return (free_memory(arr, cnt));
			j = 0;
		}
		else
			j++;
	}
	return (arr);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	j;
	size_t	len;
	int		cnt;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	if (!(arr = get_memory(s, c, len)))
		return (NULL);
	i = -1;
	j = 0;
	cnt = 0;
	while (++i < len)
		if (s[i] == c)
		{
			i = omit_delimeter(s, c, i);
			if (j != 0)
				cnt++;
			j = 0;
		}
		else
			arr[cnt][j++] = s[i];
	return (arr);
}
