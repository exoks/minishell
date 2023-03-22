/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:14:53 by oezzaou           #+#    #+#             */
/*   Updated: 2022/09/30 15:16:17 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;
	char		c;

	nb = (int) n;
	if (fd != -1)
	{
		if (nb < 0)
		{
			write(fd, "-", 1);
			nb = -nb;
		}
		c = (nb % 10) + '0';
		if (nb < 10)
			write(fd, &c, 1);
		else
		{
			ft_putnbr_fd(nb / 10, fd);
			write(fd, &c, 1);
		}
	}
}
/*
#include <limits.h>
#include <fcntl.h>
int	main(void)
{
	int	fd;

	fd = open ("d", O_CREAT | O_RDWR, 0777);
	ft_putnbr_fd(INT_MIN, fd);
	return (0);
}
*/
