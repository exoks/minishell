# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/05 14:54:46 by oezzaou           #+#    #+#              #
#    Updated: 2023/03/21 19:38:10 by oezzaou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#########################################
#                COMPILER               #
#########################################
CC		:= gcc
CFLAGS		:= -Wall -Wextra -Werror
LINKS		:= readline
RM		:= rm -rf

#########################################
#                  SRCS                 #
#########################################
NAME		:= minishell
SRCDIR		:= srcs
BUILTINDIR 	:= builtins
OBJDIR		:= objs
LIBFTDIR	:= libft
LIBFT		:= $(LIBFTDIR)/libft.a

#########################################
#                 SRCS                  #
#########################################
INC		:= -Iincludes -I$(LIBFTDIR)
SRC		:= minishell minishell_prompt minishell_process minishell_init
OBJ		:= $(addprefix $(OBJDIR)/, $(addsuffix .o, $(SRC)))
SRC		:= $(addprefix $(SRCDIR)/, $(addsuffix .c, $(SRC)))

##############################
#          BUILTIN           #
##############################
BUILTIN 	:= ls
BUILTIN_OBJ	:= $(addprefix $(OBJDIR)/, $(addsuffix .o, $(BUILTIN)))
BUILTIN		:= $(addprefix $(BUILTINDIR)/, $(addsuffix .c, $(BUILTIN)))

all: $(OBJDIR) $(NAME)

$(NAME): $(LIBFT) $(OBJ) $(BUILTIN_OBJ)
	@$(CC) $(CFLAGS) $^ -o $@ -l$(LINKS) $(INC)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@
	@echo "Compiling $< ==> $@ ..."

$(OBJDIR)/%.o: $(BUILTINDIR)/%.c
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@
	@echo "Compiling $< ==> $@ ..."

$(OBJDIR):
	@mkdir -p $@

$(LIBFT): $(LIBFTDIR)
	@make -s -C $<

clean: $(LIBFTDIR)
	@make -C $< clean
	@$(RM) $(NAME)

fclean: $(LIBFTDIR) clean
	@make -C $< fclean
	@$(RM) $(OBJDIR)

re: fclean all

run:
	@./$(NAME)

.PHONY: all clean fclean re run $(LIBFT)
