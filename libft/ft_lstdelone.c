/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:21:30 by oezzaou           #+#    #+#             */
/*   Updated: 2022/09/30 15:21:34 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del || !lst)
		return ;
	del(lst->content);
	free(lst);
}
/*
void	ft_del(void *pt)
{
	free (pt);
}

#include <stdio.h>
int	main(void)
{
	t_list	*pt;

	pt = (t_list *) malloc (sizeof(t_list));
	if (!pt)
		return (0);
	pt->content = (void *) malloc (7);
	pt->next = 0;
	ft_lstdelone(pt, &ft_del);
	printf("%s\n", pt->content);
	return (0);
}
*/
