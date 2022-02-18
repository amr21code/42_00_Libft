/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amr21code <a@n.de>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 08:40:00 by amr21code         #+#    #+#             */
/*   Updated: 2022/01/22 10:48:39 by amr21code        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memchr() function scans the initial n bytes of the memory area 
 pointed to by s for the first instance of c. Both c and the bytes of 
 the memory area pointed to by s are interpreted as unsigned char. */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
		{
			ptr = ((unsigned char *)s + i);
			return ((void *)ptr);
		}
		i++;
	}
	return (NULL);
}
