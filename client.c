/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szeroual <szeroual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:30:47 by szeroual          #+#    #+#             */
/*   Updated: 2024/07/28 21:03:47 by szeroual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"
#include "Ft_printf/ft_printf.h"
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	if_nb(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

void	send_char(pid_t pid, char c)
{
	int	i;

	i = 8;
	while (--i >= 0)
	{
		if ((c >> i) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(125);
	}
}

void	send_string(pid_t pid, char *str)
{
	while (*str)
	{
		send_char(pid, *str);
		str++;
	}
	send_char(pid, *str);
}

int	main(int ac, char **av)
{
	pid_t	pid;
	char	*message;

	if (ac == 3)
	{
		if (!if_nb(av[1]))
			return (ft_printf("PID SHOULD ONLY CONATAIN DIGITS"));
		pid = ft_atoi(av[1]);
		message = av[2];
		send_string(pid, message);
	}
	else if (ac != 3)
		ft_printf("we need 3 arguments");
	return (0);
}
