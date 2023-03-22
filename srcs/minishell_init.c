/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:33:22 by oezzaou           #+#    #+#             */
/*   Updated: 2023/03/21 19:59:54 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minishell.h"

int	shell_init(char **env)
{
	if (!set_env_vars(env))
		return (FAILURE);
	display_shell_info();
	return (SUCCESS);
}

int	set_shell_env(char **env)
{
	init.env = new_env_var((*env)++);
	if (!env)
		return (FAILURE);
	while (*env)
	{
		last_env_var(env)->next = new_env_var(env++);
		if (!env_next)
			return (FAILURE);
	}
	return (SUCCESS);
}

void	display_shell_info(void)
{
	printf("\nMini Shell [Version 1.0.0.0]\nCopyright (C) OEZZAOU && AEL-MOUDEN. All Rights Reserved.\n\n");
}

t_env	*last_env_var(t_env *env)
{
	while (env)
	{
		if (env->next == 0)
			return (env);
		env = env->next;
	}
	return (env);
}

t_env	*new_env_var(char *var)
{
	t_env	*env;

	env = malloc(sizeof(t_env));
	if (!env)
		return (FAILURE);
	env->var = var;
	env->next = 0;
	return (env);
}
