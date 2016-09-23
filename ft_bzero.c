/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 18:01:42 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/22 18:01:44 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*cast;
	int		index;

	if (!n)
		return ;
	cast = (char *)s;
	index = 0;
	while (n)
	{
		cast[index++] = '\0';
		n--;
	}
	s = cast;
}
