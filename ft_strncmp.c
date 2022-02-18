/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amr21code <a@n.de>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 09:58:07 by amr21code         #+#    #+#             */
/*   Updated: 2022/01/22 19:50:28 by amr21code        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (*(s1 + i) != *(s2 + i))
			return ((unsigned char) *(s1 + i) - (unsigned char) *(s2 + i));
		if (*(s1 + i) == '\0')
			return (0);
		i++;
	}
	return (0);
}
