/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dynamic_array.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 19:02:45 by cfredric          #+#    #+#             */
/*   Updated: 2016/11/30 19:02:49 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_DYNAMIC_ARRAY
# define _FT_DYNAMIC_ARRAY
# include "libft.h"

typedef	struct 	s_dynamic_arr
{
	char		*array;
	size_t		used;
	size_t		size;
}				t_dynamic_arr;

t_dynamic_arr	*init_arr(t_dynamic_arr *arr, size_t initial_size);
int				insert_arr(t_dynamic_arr *arr, char c);
void			free_arr(t_dynamic_arr *arr);

#endif
