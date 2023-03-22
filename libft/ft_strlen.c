/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:16:13 by oezzaou           #+#    #+#             */
/*   Updated: 2022/10/02 18:00:17 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	if (*s)
		return (1 + ft_strlen(++s));
	return (0);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	printf("the len : %d\n", ft_strlen(av[1]));
	return (0);
}
*/
