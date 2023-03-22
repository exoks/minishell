/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:20:57 by oezzaou           #+#    #+#             */
/*   Updated: 2022/10/01 21:47:58 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*med;

	if (*lst)
	{
		med = ft_lstlast(*lst);
		med->next = new;
	}
	else
		(*lst) = new;
}
/*
#include <stdio.h>
int     main(void)
{
        t_list **pt;
        t_list *list;
        t_list  *new;
        int     i;

        list = (t_list *) malloc (sizeof(t_list) * 4);
        if (!list)
                return (0);
        pt = &list;
        i = -1;
        while (++i < 4)
        {
                list[i].next = &list[i + 1];
                list[i].content = "oussama";
        }
        list[3].next = 0;
        new = (t_list *) malloc(sizeof(t_list));
        if (!new)
                return (0);
        new->content = "fuck you";
	new->next = 0;
        ft_lstadd_back(pt, new);
        while (*pt)
        {
                printf("%s\n", (*pt)->content);
                (*pt) = (*pt)->next;
        }
        return (0);
}
*/
