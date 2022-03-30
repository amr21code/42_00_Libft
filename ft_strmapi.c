/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 09:16:22 by anruland         #+#    #+#             */
/*   Updated: 2022/03/22 10:12:23 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Applies the function 'f' to each character of the string 's', and
	passing its index as first argument to create a new string resulting
	from successive applications of 'f'. */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*modified;
	int		i;

	i = 0;
	modified = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	while (s[i])
	{
		modified[i] = f(i, s[i]);
		i++;
	}
	modified[i] = '\0';
	return (modified);
}
