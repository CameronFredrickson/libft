/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 22:52:17 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/26 22:52:19 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compares up to n characters between the source and destination strings
**
** @param	the string to be compared
** @param	the string to be compared
** @param	the number of characters to be compared
**
** @return	the differnce in the values of the characters compared
*/

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*cast1;
	unsigned char	*cast2;

	cast1 = (unsigned char *)s1;
	cast2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*cast1 != *cast2)
			return ((int)(*cast1 - *cast2));
		if (!*cast1 && !*cast2)
			return (0);
		cast1++;
		cast2++;
		n--;
	}
	return (0);
}
