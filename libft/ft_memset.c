/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:17:08 by oezzaou           #+#    #+#             */
/*   Updated: 2022/10/02 18:02:16 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*med;
	size_t			i;

	med = (unsigned char *)b;
	i = 0;
	while (i < len)
		med[i++] = c;
	return (b);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_memset(av[1], av[2][0], atoi(av[3])));
	return (0);
}*/
