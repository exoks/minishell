/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:20:19 by oezzaou           #+#    #+#             */
/*   Updated: 2022/09/30 12:20:56 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char ))
{
	int		i;
	char	*str;

	if (!s)
		return (0);
	i = ft_strlen(s);
	str = (char *) malloc(i + 1);
	if (!str)
		return (0);
	str[i] = 0;
	while (--i >= 0)
		str[i] = f(i, s[i]);
	return (str);
}
/*
char	ft(unsigned int n, char c)
{
	return (c);
}

#include <stdio.h>
int	main(int ac, char **av)
{
	char	*str;

	str = ft_strmapi(av[1], ft);
	while (*str)
		printf("%c", *(str++));
	return (0);
}
*/
