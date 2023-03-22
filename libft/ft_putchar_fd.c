/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:49:16 by oezzaou           #+#    #+#             */
/*   Updated: 2022/09/30 12:50:04 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd != -1)
		write(fd, &c, 1);
}
/*
#include <fcntl.h>
int	main(void)
{
	int	fd;

	fd = open("data.txt", O_CREAT | O_RDWR, 7777);
	ft_putchar_fd('a', fd);
	return (0);
}
*/
