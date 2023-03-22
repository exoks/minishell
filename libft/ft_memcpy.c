/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:04:08 by oezzaou           #+#    #+#             */
/*   Updated: 2022/10/02 21:39:06 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*med;
	size_t	i;

	med = (char *) dst;
	if (dst != src)
	{
		i = 0;
		while (i < n)
		{
			med[i] = *((char *)src + i);
			i++;
		}
	}
	return (dst);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	size_t	n;
	printf("%s\n", ft_memcpy(av[1], av[1], 3));
	return (0);
}
*/

// memmove will handle the overlap : 
// (the case where the data get lost during the copy operation)
