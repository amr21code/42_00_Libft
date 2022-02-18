/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amr21code <a@n.de>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 09:57:04 by amr21code         #+#    #+#             */
/*   Updated: 2022/01/12 19:58:19 by amr21code        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		write(fd, &str[count], 1);
		count++;
	}
}