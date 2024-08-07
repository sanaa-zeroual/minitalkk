/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szeroual <szeroual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 23:45:25 by szeroual          #+#    #+#             */
/*   Updated: 2023/12/21 20:20:04 by szeroual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

int	ft_check_format(va_list args, char c);
int	ft_printf(const char *str, ...);
int	ft_putnbr(int nb);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_puthexadecimal_long(unsigned long nb);
int	ft_putnbrlong(unsigned int nb);
int	ft_puthexadecimal_uppercase(unsigned int nb);
int	ft_puthexadecimal_lowercase(unsigned int nb);
#endif
