/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 10:17:10 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/21 10:17:11 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	char	*new;
	void	*new_p;
	int		index;

	new = (char *)str;
	index = 0;
	while (n)
	{
		new[index] = (char)c;
		n--;
	}
	new_p = new;
	return (new_p);
}
