/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:58:27 by oezzaou           #+#    #+#             */
/*   Updated: 2022/09/30 18:04:11 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char *))
{
	int	i;

	if (!s || !f)
		return ;
	i = -1;
	while (s[++i])
		f((unsigned int)i, &s[i]);
}
/*
void	ft(unsigned int i, char *chaaddr)
{
	(void) i;
	*chaaddr = '0';
}

#include <stdio.h>
int	main(void)
{
	char	s[7] = "oussama";

	ft_striteri(s, &ft);
	printf("%s\n", s);
	return (0);
}
*/
