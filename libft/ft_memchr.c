/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:30:59 by oezzaou           #+#    #+#             */
/*   Updated: 2022/10/02 20:33:33 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *((unsigned char *)s + i) != (unsigned char)c)
		i++;
	if (i == n)
		return (0);
	return ((void *) &s[i]);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	printf("%s\n", memchr(av[1], av[2][0], 8));
	return (0);
}
*/
