/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexadecimal_long.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szeroual <szeroual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 23:53:23 by szeroual          #+#    #+#             */
/*   Updated: 2023/12/20 14:43:05 by szeroual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexadecimal_long(unsigned long nb)
{
	int		result;
	char	*base;

	result = 0;
	base = "0123456789abcdef";
	if (nb >= 16)
	{
		result += ft_puthexadecimal_long(nb / 16);
		result += ft_puthexadecimal_long(nb % 16);
	}
	else
		result += ft_putchar(base[nb % 16]);
	return (result);
}
