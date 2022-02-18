/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amr21code <a@n.de>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 12:43:12 by amr21code         #+#    #+#             */
/*   Updated: 2022/01/22 19:52:04 by amr21code        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strlen() function calculates the length of the string str, excluding 
 the terminating null byte (\0). 

 The strlen() function returns the number of bytes in the string s. */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	str_count;

	str_count = 0;
	while (str[str_count] != '\0')
	{
		str_count++;
	}
	return (str_count);
}
