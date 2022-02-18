/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amr21code <a@n.d>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 12:10:30 by amr21code         #+#    #+#             */
/*   Updated: 2022/01/06 12:10:32 by amr21code        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (!(c >= 'A' && c <= 'Z') && !(c >= 'a' && c <= 'z'))
		return (0);
	return (1);
}
