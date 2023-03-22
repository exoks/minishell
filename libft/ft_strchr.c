/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:27:56 by oezzaou           #+#    #+#             */
/*   Updated: 2022/10/02 18:22:13 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char) c)
		s++;
	if (*s != 0 || (c == 0 && *s == 0))
		return ((char *) s);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char	s[7] = "oussama";

	printf("%s\n", ft_strchr(s, 0));
	return (0);
}
*/
