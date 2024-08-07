/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkformat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szeroual <szeroual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 23:39:38 by szeroual          #+#    #+#             */
/*   Updated: 2023/12/20 14:42:48 by szeroual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_format(va_list args, char c)
{
	int	result;

	result = 0;
	if (c == 'd' || c == 'i')
		result += ft_putnbr(va_arg(args, int));
	else if (c == 's')
		result += ft_putstr(va_arg(args, char *));
	else if (c == 'c')
		result += ft_putchar(va_arg(args, int));
	else if (c == 'x')
		result += ft_puthexadecimal_lowercase(va_arg(args, unsigned int));
	else if (c == 'X')
		result += ft_puthexadecimal_uppercase(va_arg(args, unsigned int));
	else if (c == 'u')
		result += ft_putnbrlong(va_arg(args, unsigned int));
	else if (c == '%')
		result += ft_putchar('%');
	else if (c == 'p')
	{
		result += ft_putstr("0x");
		result += ft_puthexadecimal_long(va_arg(args, unsigned long));
	}
	return (result);
}
