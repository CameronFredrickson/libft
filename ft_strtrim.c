/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 08:49:31 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/29 10:07:13 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' ||
		c == '\r' || c == '\f' || c == ' ')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	unsigned int	index;
	size_t			new_len;
	char			*new;

	if (!s)
		return (NULL);
	index = 0;
	while (ft_isspace(s[index]))
		index++;
	new_len = ft_strlen(s) - 1;
	if (index == new_len + 1)
	{
		new = "";
		return (new);
	}
	while (ft_isspace(s[new_len]))
		new_len--;
	if (index == 0 && new_len + 1 == ft_strlen(s))
		return ((char *)s);
	new = ft_strsub(s, index, new_len - index + 1);
	if (!new)
		return (NULL);
	return (new);
}
