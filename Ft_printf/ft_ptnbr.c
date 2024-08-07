/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptnbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szeroual <szeroual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 23:47:52 by szeroual          #+#    #+#             */
/*   Updated: 2023/12/20 17:54:16 by szeroual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	length;

	length = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		length += 11;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		length += (1 + ft_putnbr(-nb));
	}
	else if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + '0');
		length += 1;
	}
	else if (nb > 9)
	{
		length += ft_putnbr(nb / 10);
		length += ft_putnbr(nb % 10);
	}
	return (length);
}
