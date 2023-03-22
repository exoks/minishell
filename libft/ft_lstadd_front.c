/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:17:10 by oezzaou           #+#    #+#             */
/*   Updated: 2022/10/02 21:57:27 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>
int	main(void)
{
	t_list **pt;
	t_list *list;
	t_list	*new;
	int	i;

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
	new = (t_list *) malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->content = "fuck you";
	ft_lstadd_front(pt, new);
	while ((*pt))
	{
		printf("%s\n", (*pt)->content);
		(*pt) = (*pt)->next;
	}
	return (0);
}
*/
