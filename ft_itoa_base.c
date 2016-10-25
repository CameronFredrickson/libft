/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/24 19:06:16 by cfredric          #+#    #+#             */
/*   Updated: 2016/10/24 19:06:16 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_intlen_base(int value, int base)
{
	int		len;

	len = 0;
	if (value == 0)
		return (1);
	if (value < 0 && base == 10)
		len++;
	while (value)
	{
		value /= base;
		len++;
	}
	return (len);
}

char	*ft_itoa_base(int value, int base)
{
	char	*base16 = "0123456789ABCDEF";
	char	*result;
	int		len;
	long	l_value;

	l_value = value;
	len = ft_intlen_base(value, base);
	result = (char *)malloc(sizeof(char) * (len + 1));
	result[len--] = 0;
	if (l_value == 0)
		result[0] = '0';
	if (l_value < 0)
	{
		l_value *= -1;
		result[0] = '-';
	}
	while (l_value)
	{
		result[len] = base16[l_value % base];
		l_value /= base;
		len--;
	}
	return (result);
}
