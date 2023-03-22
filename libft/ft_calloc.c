/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:36:48 by oezzaou           #+#    #+#             */
/*   Updated: 2023/01/17 16:59:16 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pt;
	size_t	i;

	pt = (void *) malloc(count * size);
	if (!pt)
		return (0);
	i = 0;
	while (i < size * count)
		*((char *)pt + i++) = 0;
	return (pt);
}
