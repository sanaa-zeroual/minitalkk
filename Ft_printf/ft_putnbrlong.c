/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrlong.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szeroual <szeroual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:45:29 by szeroual          #+#    #+#             */
/*   Updated: 2023/12/21 09:24:08 by szeroual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrlong(unsigned int nb)
{
	int	length;

	length = 0;
	if (nb >= 0 && nb <= 9)
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
