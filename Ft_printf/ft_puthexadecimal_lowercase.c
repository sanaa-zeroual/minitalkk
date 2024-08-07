/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexadecimal_lowercase.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szeroual <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:32:51 by szeroual          #+#    #+#             */
/*   Updated: 2023/12/20 11:36:13 by szeroual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexadecimal_lowercase(unsigned int nb)
{
	int		result;
	char	*base;

	result = 0;
	base = "0123456789abcdef";
	if (nb >= 16)
	{
		result += ft_puthexadecimal_lowercase(nb / 16);
		result += ft_puthexadecimal_lowercase(nb % 16);
	}
	else
		result += ft_putchar(base[nb % 16]);
	return (result);
}
