/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 10:20:43 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/25 10:45:25 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	chr;
	unsigned char	*cast;
	size_t			index;

	chr = (unsigned char)c;
	cast = (unsigned char *)s;
	index = 0;
	while (index < n)
	{
		if (*cast == chr)
			return ((void *)cast);
		index++;
		cast++;
	}
	cast = NULL;
	return ((void *)cast);
}
