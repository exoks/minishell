/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:44:07 by oezzaou           #+#    #+#             */
/*   Updated: 2023/03/21 17:53:04 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minishell.h"

int	pwd(void)
{
	char	*abs_path;

	abs_path = 0;
	abs_path = getcwd(abs_path, 0);
	if(!abs_path)
		return (FAILURE);
	printf("%s\n", abs_path);
	return (SUCCESS);
}

int	main(void)
{
	pwd();
	return (0);
}
