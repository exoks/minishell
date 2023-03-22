/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:08:31 by oezzaou           #+#    #+#             */
/*   Updated: 2022/09/30 12:08:34 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// it removes char set from the begining and the end of the string
char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	if (!s1 || !set)
		return (0);
	i = -1;
	while (s1[++i] && ft_strchr(set, s1[i]))
		;
	j = i + ft_strlen(&s1[i]);
	while (j && ft_strchr(set, s1[j]))
		j--;
	if (j - i < 0)
		j = 0;
	else
		j = j - i + 1;
	return (ft_substr(s1, i, j));
}
// condition : i have to handle the case of full blank ()
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_strtrim(av[1], av[2]));
	return (0);
}
*/
/*
static int	ft_is_exist(char c, char *set)
{
	while (*set && *set != c)
		set++;
	if (*set != 0)
		return (1);
	return (0);
}

static int	ft_ssp_cnt(char *str, char *set)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (ft_is_exist(*str, set))
			i++;
		str++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;

	i = 0;
	while (s1[i++])
		;
	str = (char *) malloc((i - ft_ssp_cnt((char *)s1, (char *)set)) + 1);
	if (!str)
		return (0);
	i = 0;
	while (*s1)
	{
		if (!ft_is_exist(*s1, (char *)set))
			str[i++] = *s1;
		s1++;
	}
	str[i] = 0;
	return (str);
}
*/
