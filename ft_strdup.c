/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 12:57:14 by cfredric          #+#    #+#             */
/*   Updated: 2016/09/21 12:57:15 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	char	*new_string;
	int		index;

	new_string = (char *)malloc(sizeof(char) * (ft_strlen(string) + 1));
	index = 0;
	while (string[index])
	{
		new_string[index] = string[index];
		index++;
	}
	new_string[index] = '\0';
	return (new_string);
}
