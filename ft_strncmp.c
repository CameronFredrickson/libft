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

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n && *s1 == *s2)
	{
		s1++;
		s2++;
		index++;
	}
	return ((int)((unsigned char)*s1 - (unsigned char)*s2));
}
