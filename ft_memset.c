/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amr21code <a@n.de>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 11:11:40 by amr21code         #+#    #+#             */
/*   Updated: 2022/01/22 10:48:19 by amr21code        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  The memset() function fills the first len bytes of the memory area 		
 pointed to by s with the constant byte c. 								*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*((char *)s + i) = c;
		i++;
	}
	return (s);
}
