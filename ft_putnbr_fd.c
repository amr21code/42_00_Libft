/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amr21code <a@n.de>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 09:56:27 by amr21code         #+#    #+#             */
/*   Updated: 2022/01/15 12:14:01 by amr21code        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_prepare_numbers(char *number_array, unsigned int num)
{
	int	counter;

	counter = 0;
	while (num != 0)
	{
		number_array[counter] = (num % 10) + '0';
		num = num / 10;
		counter++;
	}
	return (counter - 1);
}

void	ft_putnbr_fd(int nb, int fd)
{
	char			output[11];
	int				counter;
	unsigned int	num;

	num = nb;
	counter = 0;
	if (nb == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		num = -nb;
		write(fd, "-", 1);
	}
	counter = ft_prepare_numbers(output, num);
	while (counter >= 0)
	{
		write(fd, &output[counter], 1);
		counter--;
	}
}
