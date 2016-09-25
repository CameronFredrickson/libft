/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 14:04:41 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/24 14:04:42 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t len)
{
	unsigned char	*tmp_mem;

	if (!dest || !src)
		return (NULL);
	tmp_mem = malloc(sizeof(*src) * len);
	ft_memcpy(tmp_mem, src, len);
	ft_memcpy(dest, tmp_mem, len);
	free(tmp_mem);
	return (dest);
}
