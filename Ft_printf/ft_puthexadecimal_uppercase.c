/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexadecimal_uppercase.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szeroual <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:36:45 by szeroual          #+#    #+#             */
/*   Updated: 2023/12/20 11:38:53 by szeroual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexadecimal_uppercase(unsigned int nb)
{
	int		result;
	char	*base;

	result = 0;
	base = "0123456789ABCDEF";
	if (nb >= 16)
	{
		result += ft_puthexadecimal_uppercase(nb / 16);
		result += ft_puthexadecimal_uppercase(nb % 16);
	}
	else
		result += ft_putchar(base[nb % 16]);
	return (result);
}
