/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:22:06 by oezzaou           #+#    #+#             */
/*   Updated: 2022/10/02 19:26:58 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (src >= dst)
		ft_memcpy(dst, src, len);
	else
	{
		while (--len >= 0 && len <= 2147483647)
			*((char *)dst + len) = *((char *)src + len);
	}
	return (dst);
}
// len-- OR --len >= 0 && len <= INT_MAX
// ? : //len will be shefted if len < 0 <==>
// => (4959030.. and this number > INT_MAX (that's why segmentation fault)
/*
#include <stdlib.h>
#include <stdio.h>
int	main(int ac, char **av)
{
	char	str[10] = "oussama";

	ft_memmove(str, &str[3], 3);
	printf("%s\n", str);
	return (0);
}
*/
/*
	char  s[len];
	size_t  i;
        char    *med;
        ***** allocation in the stack *******
        med = (char *) src;
        i = -1;
        while (med[++i])
                s[i] = med[i];
        med = (char *)dst;
        i = -1;
        while (++i < len)
                med[i] = s[i];
        ****** memmove using malloc *********
        s = (char *) malloc(len + 1);
        if (!s)
                return (0);
        i = 0;
        while (*((char *)src + i))
        {
                s[i] = *((char *)src + i);
                i++;
        }
        i = -1;
        while (s[++i] && i < len)
                *((char *)dst + i) = s[i];
*/
