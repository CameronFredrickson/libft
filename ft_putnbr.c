/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 15:52:24 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/30 16:27:15 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		int_len(long n)
{
	int		count;

	count = 0;
	while (n)
	{
		count++;
		n /= 10;
	}
	return count;
}

void			ft_putnbr(int n)
{
	long			new_n;
	char			buf[0x7F];
	int	unsigned	index;

	new_n = (long)n;
	index = int_len(new_n) - 1;
	ft_strclr(buf);
	if (new_n == 0)
		ft_putchar('0');
	if (new_n < 0)
	{
		ft_putchar('-');
		new_n *= -1;
	}
	while (index > 0)
	{
		buf[index] = (char)((new_n % 10) + '0');
		new_n /= 10;
		index--;
	}
	buf[index] = (char)((new_n % 10) + '0');
	ft_putstr(buf);
}
