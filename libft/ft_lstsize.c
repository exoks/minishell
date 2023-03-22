/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:17:52 by oezzaou           #+#    #+#             */
/*   Updated: 2022/09/30 15:18:10 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	if (lst)
		return (1 + ft_lstsize(lst->next));
	return (0);
}
/*
#include <stdio.h>
int     main(void)
{
        t_list **pt;
        t_list *list;
        t_list *new;
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
	printf("%d\n", ft_lstsize(*pt));
        return (0);
}
*/
