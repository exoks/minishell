/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 19:09:46 by oezzaou           #+#    #+#             */
/*   Updated: 2023/03/21 19:36:07 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdio.h>
# include <readline/readline.h>
# include <readline/history.h>
# include <dirent.h>
# include <errno.h>
# include "init.h"
# include "libft.h"
# include "prompt.h"
# include "builtin.h"

# define TRUE 1
# define FALSE 0

//###################################
//#          STANDART FD            #
//###################################
# define STD_IN 0
# define STD_OUT 1
# define STD_ERROR 2

//###################################
//#             ERRORS              #
//###################################
# define PERMISSION_DINED 126
# define CMD_NOT_FOUND 127

typedef struct		s_dir
{
	DIR		*stream;
	struct	dirent	*dir_info;
}			t_dir;

typedef struct s_cmd
{
	int			id;
	char		*name;
	char		**args;
	char		*path;
	int			pid;
}				t_cmd;

typedef struct	s_logical_operators
{
	int			pipe;
	int			end;
	int			s_colom;
}				t_logical_operators;

	/********** MINISHELL UTILS ***************/
int		get_cmds(char *line);

#endif
