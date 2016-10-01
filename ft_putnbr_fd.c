/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 15:59:29 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/30 16:01:52 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		int_len(long n)
{
	unsigned int	count;

	count = 0;
	while (n)
	{
		count++;
		n /= 10;
	}
	return count;
}

static void		ft_putnbr_mod(int n, int fd)
{
	long			new_n;
	char			buf[0x7F];
	int	unsigned	index;

	new_n = (long)n;
	index = int_len(new_n) - 1;
	ft_strclr(buf);
	if (new_n == 0)
		ft_putchar_fd('0', fd);
	if (new_n < 0)
	{
		ft_putchar_fd('-', fd);
		new_n *= -1;
	}
	while (index > 0)
	{
		buf[index] = (char)((new_n % 10) + '0');
		new_n /= 10;
		index--;
	}
	buf[index] = (char)((new_n % 10) + '0');
	ft_putstr_fd(buf, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	ft_putnbr_mod(n, fd);
}
