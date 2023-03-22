/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:23:35 by oezzaou           #+#    #+#             */
/*   Updated: 2022/10/02 15:40:52 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*head;

	if (!lst)
		return (0);
	new = malloc(sizeof(t_list));
	if (!new)
		return (0);
	head = new;
	head->content = f(lst->content);
	lst = lst->next;
	while (lst)
	{
		head->next = malloc (sizeof(t_list));
		head = head->next;
		if (!head)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		head->content = f(lst->content);
		lst = lst->next;
	}
	head->next = 0;
	return (new);
}
/*
void	*ft(void *addr)
{
	return (addr);
}

void	del(void *addr)
{
	free(addr);
}

#include <stdio.h>
int	main(void)
{
	int		size;
	t_list *lst;
	int		i;
	t_list	*cpy;

	size = 4;
	lst = (t_list *) malloc (sizeof(t_list) * size);
	if (!lst)
		return (0);
	i = -1;
	while (++i < size)
	{
		if (i != (size - 1))
			lst[i].next = &lst[i + 1];
		lst[i].content = "oussama";
	}
	lst[3].next = 0;
	cpy = ft_lstmap(lst, &ft, &del);
	while (cpy)
	{
		printf("%s\n", cpy->content);
		cpy = cpy->next;
	}
	return (0);
}
*/
