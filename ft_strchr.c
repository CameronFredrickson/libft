/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 14:27:23 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/23 14:27:24 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*new_str;
	size_t			index;
	size_t			flag;
	size_t			len;

	flag = 0;
	len = ft_strlen(s);
	new_str = (char *)s;
	index = 0;
	while (index < len)
	{
		if (new_str[index] == c)
		{
			flag = 1;
			break ;
		}
		index++;
	}
	(flag) ? (new_str + index) : (new_str = NULL);
	return (new_str);
}
