/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 22:19:54 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/27 22:19:55 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locates a string within another string
**
** @param	the string to be searched
** @param	the string to be searched for
**
** @return	a pointer to the location of the substring within the search string
**			or NULL if the substring is not found
*/

char		*ft_strstr(const char *big, const char *little)
{
	int		b_index;
	int		b_save;
	int		l_index;
	int		l_len;
	char	*cast;

	b_save = 0;
	b_index = 0;
	l_len = ft_strlen(little);
	cast = (char *)big;
	if (!*little)
		return (cast);
	while (cast[b_index])
	{
		l_index = 0;
		b_index = b_save;
		while (cast[b_index++] == little[l_index])
		{
			if (l_index + 1 == l_len)
				return (cast += (b_index - 1 - l_index));
			l_index++;
		}
		b_save++;
	}
	return (NULL);
}
