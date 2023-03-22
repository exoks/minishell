/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell_process.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 16:31:34 by oezzaou           #+#    #+#             */
/*   Updated: 2023/03/05 17:30:17 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minishell.h"

int	check_pars_error(char *line)
{
	int		i;
	int		j;
//	t_operator 	ops;

	i = -1;
	while (line[++i])
	{
		j = 0;
		while(line[i + j] && (line[i + j] == '|' || line[i + j] == '&'
				|| line[i + j] == ';'))
				j++;
		if (j > 2)
			return (TRUE);
	}
	return (FALSE);
}

int	get_cmds(char *line)
{
	printf("Check => %d\n", check_pars_error(line));
	return (TRUE);
}
