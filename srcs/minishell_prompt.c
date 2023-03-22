/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell_prompt.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 19:14:52 by oezzaou           #+#    #+#             */
/*   Updated: 2023/03/21 18:31:03 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minishell.h"

char	*create_shell_prompt(void)
{
	char	*cwd;
	t_dir	dir;
	char	*tmp;

	cwd = NULL;
	cwd = getcwd(cwd, 0);
	dir.stream = opendir(cwd);
	if (!cwd || !dir.stream)
		return (FAILURE);
	cwd = ft_strrchr(cwd, '/') + !(!*(cwd + 1));
	tmp = ft_strjoin(PROMPT_PREFIX, cwd);
	dir.dir_info = readdir(dir.stream);
	while (dir.dir_info)
	{
		if (ft_strncmp(dir.dir_info->d_name, ".git", 4) == 0)
			return (ft_strjoin(cwd, PROMPT_GIT_SUFFIX));
		dir.dir_info = readdir(dir.stream);
	}
	free(tmp);
	closedir(dir.stream);
	return (ft_strjoin(cwd, PROMPT_SUFFIX));
}

char	*read_cmd_line(void)
{
	char	*prompt;
	char	*cmd_line;

	if (!isatty(STD_IN))
		return (FAILURE);
	prompt = create_shell_prompt();
	if (!prompt)
		return (FAILURE);
	cmd_line = readline(prompt);
	if (!cmd_line)
		return (FAILURE);
	free(prompt);
	return (cmd_line);
}
