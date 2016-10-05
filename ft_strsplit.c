/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 10:17:39 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/29 21:12:24 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	**arr_alloc(char const *s, char c)
{
	size_t	i;
	char	**alloc;
	size_t	size;

	size = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			size++;
			while (s[i] != c && s[i])
				i++;
		}
		while (s[i] == c && s[i])
			i++;
	}
	alloc = (char **)malloc((sizeof(char *) * (size + 1)));
	if (!alloc)
		return (NULL);
	alloc[size] = 0;
	return (alloc);
}

static int		str_alloc(char const *s, char c, char **arr)
{
	size_t	i;
	size_t	str_i;
	size_t	arr_i;

	arr_i = 0;
	i = 0;
	while (s[i])
	{
		str_i = 0;
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
			{
				i++;
				str_i++;
			}
			arr[arr_i] = ft_strnew(str_i);
			if (arr[arr_i] == NULL)
				return (0);
			arr_i++;
		}
		while (s[i] == c && s[i])
			i++;
	}
	return (1);
}

static void		fill_in(char const *s, char c, char **arr)
{
	size_t	i;
	size_t	str_i;
	size_t	arr_i;

	arr_i = 0;
	i = 0;
	while (s[i])
	{
		str_i = 0;
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
			{
				arr[arr_i][str_i] = s[i];
				i++;
				str_i++;
			}
			arr_i++;
		}
		while (s[i] == c && s[i])
			i++;
	}
}

char			**ft_strsplit(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (NULL);
	arr = arr_alloc(s, c);
	if (!arr)
		return (NULL);
	if (!str_alloc(s, c, arr))
		return (NULL);
	fill_in(s, c, arr);
	return (arr);
}
