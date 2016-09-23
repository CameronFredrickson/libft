/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 18:13:10 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/22 18:13:11 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest_str;
	const char	*src_str;
	int			index;

	dest_str = (char *)dest;
	src_str = (char *)src;
	index = 0;
	while (n)
	{
		dest_str[index] = src_str[index];
		index++;
		n--;
	}
	dest = (void *)dest_str;
	return (dest);
}
