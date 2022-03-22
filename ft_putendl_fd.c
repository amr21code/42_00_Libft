/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:20:38 by anruland         #+#    #+#             */
/*   Updated: 2022/03/22 10:10:37 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		write(fd, &str[count], 1);
		count++;
	}
	write(fd, "\n", 1);
}
