/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:46:46 by oezzaou           #+#    #+#             */
/*   Updated: 2023/03/21 18:36:12 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PROMPT_H
# define PROMPT_H

//#################################
//#           RETURN              #
//#################################
# define FAILURE 0
# define SUCCESS 1

//#################################
//#             PROMPT            #
//#################################
# define PROMPT_PREFIX " -> "
# define PROMPT_SUFFIX " : x "
# define PROMPT_GIT_SUFFIX " git:(master) x "

	/************* PROMPT *************/
char	*create_shell_prompt(void);
char	*read_cmd_line(void);
#endif
