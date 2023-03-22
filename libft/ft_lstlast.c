/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:18:25 by oezzaou           #+#    #+#             */
/*   Updated: 2022/09/30 15:18:41 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (lst->next == 0)
			return (lst);
		lst = lst->next;
	}
	return (0);
}
/*
#include <stdio.h>
int     main(void)
{
        t_list **pt;
        t_list *list;
        int     i;

        list = (t_list *) malloc (sizeof(t_list) * 4);
        if (!list)
                return (0);
        pt = &list;
        i = -1;
        while (++i < 3)
        {
                list[i].next = &list[i + 1];
                list[i].content = "oussama";
        }
        list[i].next = 0;
	printf("%s\n", ft_lstlast(list)->content);
        return (0);
}
*/
