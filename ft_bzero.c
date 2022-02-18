/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amr21code <a@n.de>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 10:10:02 by amr21code         #+#    #+#             */
/*   Updated: 2022/01/22 10:48:08 by amr21code        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  The bzero() function sets the first n bytes of the area starting at s 
  to zero (bytes containing "\0").  */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((char *)s + i) = '\0';
		i++;
	}
}
