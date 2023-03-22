/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:13:12 by oezzaou           #+#    #+#             */
/*   Updated: 2023/03/21 16:32:26 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include "minishell.h"

int	ls(char *path)
{
	t_dir	dir;

	dir.stream = opendir(path);
	if(!dir.stream)
		return (FAILURE);
	dir.dir_info = readdir(dir.stream);
	while (dir.dir_info)
	{
		printf("%s\t", dir.dir_info->d_name);
		dir.dir_info = readdir(dir.stream);
	}
	printf("\n");
	return (SUCCESS);
}
