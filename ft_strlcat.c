/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 09:07:23 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/27 09:07:25 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	append;
	size_t	index;
	size_t	dst_strt;

	dst_strt = ft_strlen(dst);
	if (dst_strt < size)
	{
		append = size - dst_strt - 1;
		dst += dst_strt;
		index = 0;
		while (index < append)
		{
			*dst = *src;
			index++;
			dst++;
			src++;
		}
		*dst = '\0';
		return (dst_strt += (1 + ft_strlen(src)));
	}
	return (ft_strlen(src) + size);
}
