/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szeroual <szeroual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 23:40:45 by szeroual          #+#    #+#             */
/*   Updated: 2023/12/21 13:30:38 by szeroual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		total;

	i = 0;
	total = 0;
	va_start(args, str);
	while (str[i])
	{
		while (str[i] && str[i] != '%')
		{
			total += ft_putchar(str[i]);
			i++;
		}
		if (!str[i] || !str[i + 1])
			break ;
		i++;
		total += ft_check_format(args, str[i]);
		i++;
	}
	va_end(args);
	return (total);
}
