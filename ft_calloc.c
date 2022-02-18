/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amr21code <a@n.de>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 18:20:18 by amr21code         #+#    #+#             */
/*   Updated: 2022/01/22 18:10:58 by amr21code        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The calloc() function allocates memory for an array of elem elements 
 of elsize bytes each and returns a pointer to the allocated memory. 
 The memory is set to zero. */

#include "libft.h"

void	*ft_calloc(size_t elem, size_t elsize)
{
	void	*pointer;

	if (elem == 0)
		return (NULL);
	pointer = malloc(elem * elsize);
	if (pointer)
	{
		ft_bzero(pointer, elem * elsize);
	}
	return (pointer);
}
