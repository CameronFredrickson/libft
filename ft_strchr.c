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
	char	*new_str;
	int		index;

	new_str = (char *)s;
	index = 0;
	while (new_str[index] != c)
	{
		if (!new_str[index])
		{
			new_str = NULL;
			break ;
		}
		index++;
	}
	return (new_str + index);
}
