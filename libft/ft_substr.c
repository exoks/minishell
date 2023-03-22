/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:03:22 by oezzaou           #+#    #+#             */
/*   Updated: 2022/10/02 21:44:25 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	str = (char *) malloc(len + 1);
	if (!str || !s)
		return (0);
	i = 0;
	while (i < len && s[start + i] && start < ft_strlen((char *)s))
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = 0;
	return (str);
}
// !s conditon : will protect more my fun
// First : substr won't work if start >= ft_strlen(s);
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	printf("%s\n", ft_substr(av[1], atoi(av[2]), atoi(av[3])));
	return (0);
}
*/
// chela machakil kayna hna khassek t3raf b3da wach len howa lindex 
// li ghadi tsali fih substring o la len dyalha  o hada howa lmochkil li kay
// o hna fin l9it whaed diff :
// 1 : kat3tik substring bin index start o index end
// 2 : kat3tik mn index start tal len li bghit mn l main str
// o hna fin ghanat chel7a am3alem
