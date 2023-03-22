/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:23:36 by oezzaou           #+#    #+#             */
/*   Updated: 2023/03/21 19:42:41 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef INIT_H
# define INIT_H
# include "minishell.h"

typedef struct	s_env
{
	char		 *var;
	struct s_env 	*next;
}		t_env;

typedef struct	s_init
{
	t_env	*env;
}		t_init;

int		shell_init(char **env);
void	display_shell_info(void);

#endif
