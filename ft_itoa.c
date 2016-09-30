/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 14:12:57 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/29 17:06:52 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	int_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static size_t	mult_gen(int len)
{
	size_t	result;

	result = 1;
	while (len > 0)
	{
		result *= 10;
		len--;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	index;
	size_t	mult;

	index = int_len(n);
	result = ft_strnew(index);
	if (!result)
		return (NULL);
	if (n < 0)
	{
		result[0] = '-';
		--index;
	}
	mult = mult_gen(--index); 
	while (mult)
	{
		result[index] = n % mult;
		mult /= 10;
		index--;
	}
	return (result);
}

int		main2(void)
{
	ft_itoa(2032);
	ft_itoa(-234);
	ft_itoa(0);
	return (0);
}

