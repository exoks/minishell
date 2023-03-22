/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:49:41 by oezzaou           #+#    #+#             */
/*   Updated: 2022/09/30 15:52:56 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s && fd != -1)
		ft_putchar_fd(*(s++), fd);
}
/*
#include <fcntl.h>
int	main(void)
{
	int	fd;

	fd = open("d.txt", O_CREAT | O_RDWR, 0777);
	ft_putstr_fd("hello world", fd);
	return (0);
}
*/
