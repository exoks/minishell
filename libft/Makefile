# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/30 15:57:20 by oezzaou           #+#    #+#              #
#    Updated: 2023/03/19 19:54:49 by oezzaou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME := libft.a
SRCM := ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
SRCB := ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
OBJM := ${SRCM:.c=.o}
OBJB := ${SRCB:.c=.o}
CFLAGS := -Wall -Wextra -Werror
HEADER := libft.h
CC := cc
GREEN := \033[1;32m
RED := \033[1;31m
CYAN := \033[1;36m
NOCLR := \033[1;0m

$(NAME): $(OBJM)
	@ar -csr $@ $^
#	@echo "$(GREEN)LIBFT CREATED ✔️"

all: $(NAME)

bonus: $(OBJB)
	@ar -r $(NAME) $^
	@echo "$(GREEN)DONE ✔️"

%.o: %.c
#	@echo "$(NOCLR)COMPILING: $(CYAN)$<" 
	@$(CC) $(CFLAGS) -c $< -I $(HEADER)

clean:
	@echo "$(RED)CLEANING..."
	@rm -f *.o
	@echo "$(GREEN)DONE ✔️"

fclean: clean
	@rm -f $(NAME)

re: fclean all
	@echo "$(GREEN)DONE ✔️"

.PHONY : all bonus clean fclean re
