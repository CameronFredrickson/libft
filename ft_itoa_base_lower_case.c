/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_lower_case.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 20:12:07 by cfredric          #+#    #+#             */
/*   Updated: 2016/12/12 20:24:22 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Converts an integer in a base (2-16) to a string representation of its value
**
** @param 	an int representing the value to be converted to a string
** @param 	an int representing the base of the number system the value
**			resides in
**
** @return	a string representation of the value param (using lower case
**			letters in bases 11-16)
*/

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
	char	*base16;
	char	*result;
	int		len;
	long	l_value;

	base16 = "0123456789abcdef";
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
