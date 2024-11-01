# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kgumusta <kgumusta@student.42kocaeli.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/02 01:52:56 by kgumusta          #+#    #+#              #
#    Updated: 2024/11/02 01:52:58 by kgumusta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

AR = ar rcs

FLAGS = -Wextra -Wall -Werror

SRCS =	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "Succesfull"

%.o: %.c
	@cc $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
	@rm -f $(OBJS)
	@echo "Cleaned"

fclean: clean
	@rm -f $(NAME)
	@echo "All Cleaned"

re: fclean all

.PHONY: all clean fclean re
