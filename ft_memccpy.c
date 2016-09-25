/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 20:36:29 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/22 20:36:29 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*dest_str;
	unsigned char	*src_str;
	size_t			index;
	unsigned char	new_c;
	int				flag;

	dest_str = (unsigned char *)dest;
	src_str = (unsigned char *)src;
	index = 0;
	new_c = (unsigned char)c;
	flag = 0;
	while (index < n)
	{
		dest_str[index] = src_str[index];
		if (src_str[index] == c)
		{
			flag = 1;
			break ;
		}
		index++;
	}
	(flag) ? (dest += (index + 1)) : (dest = NULL);
	return (dest);
}
