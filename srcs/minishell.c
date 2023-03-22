/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:53:04 by oezzaou           #+#    #+#             */
/*   Updated: 2023/03/21 19:41:36 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minishell.h"

t_init		init;

int	main(int ac, char **av, char **env)
{
	char	*cmd_line;

	(void) ac;
	(void) av;
	if (shell_init(env) == FAILURE)
		return (EXIT_FAILURE);
	while (TRUE)
	{
		cmd_line = read_cmd_line();
		if (!cmd_line)
			return (printf("%s\n", strerror(errno)), EXIT_FAILURE);
		printf("=> %s\n", cmd_line);
		//2 => pars command line
		//3 => exec commands
	}
	return (EXIT_SUCCESS);
}
