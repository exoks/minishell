/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtin.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:17:40 by oezzaou           #+#    #+#             */
/*   Updated: 2023/03/21 17:41:16 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BUILTIN_H
# define BUILTIN_H

	/************ BUILTIN COMMAND *************/
int	ls(char *path);
void	echo(char *str);
int	cd(char *path);

#endif
