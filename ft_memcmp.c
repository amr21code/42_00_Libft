/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amr21code <a@n.de>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 09:25:26 by amr21code         #+#    #+#             */
/*   Updated: 2022/01/22 10:48:48 by amr21code        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memcmp() function compares the first n bytes (each interpreted as 
 unsigned char) of the memory areas s1 and s2. 

 The memcmp() function returns an integer less than, equal to, or greater 
 than zero if the first n bytes of s1 is found, respectively, to be less 
 than, to match, or be greater than the first n bytes of s2.
 
 For a nonzero return value, the sign is determined by the sign of the 
 difference between the first pair of bytes (interpreted as unsigned char) 
 that differ in s1 and s2. */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				cmp;
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	cmp = 0;
	i = 0;
	while (i < n)
	{
		if (str1[i] < str2[i])
			return (cmp = -1);
		else if (str1[i] > str2[i])
			return (cmp = 1);
		i++;
	}
	return (cmp);
}