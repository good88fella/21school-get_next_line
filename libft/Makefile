# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktimika <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/03 17:09:37 by ktimika           #+#    #+#              #
#    Updated: 2019/09/09 13:04:22 by ktimika          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_lstnew.c ft_putnbr.c ft_striteri.c ft_strsplit.c\
	  ft_bzero.c ft_memalloc.c ft_putnbr_fd.c ft_strjoin.c ft_strstr.c\
	  ft_foreach.c ft_memccpy.c ft_putstr.c ft_strlcat.c ft_strsub.c\
	  ft_isalnum.c ft_memchr.c ft_putstr_fd.c ft_strlen.c ft_strtrim.c\
	  ft_isalpha.c ft_memcmp.c ft_sqrt.c ft_strmap.c ft_swap.c ft_isascii.c\
	  ft_memcpy.c ft_strcat.c ft_strmapi.c ft_tolower.c ft_isdigit.c\
	  ft_memdel.c ft_strchr.c ft_strncat.c ft_toupper.c ft_isprint.c\
	  ft_memmove.c ft_strclr.c ft_strncmp.c ft_itoa.c ft_memset.c ft_strcmp.c\
	  ft_strncpy.c ft_lstadd.c ft_printarray.c ft_strcpy.c ft_strnequ.c\
	  ft_lstdel.c ft_putchar.c ft_strdel.c ft_strnew.c ft_lstdelone.c\
	  ft_putchar_fd.c ft_strdup.c ft_strnstr.c ft_lstiter.c ft_putendl.c\
	  ft_strequ.c ft_strrchr.c ft_lstmap.c ft_putendl_fd.c ft_striter.c\
	  ft_strrev.c

HEADER = -I libft.h

OBJ = $(subst .c,.o,$(SRC))

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

%.o: %.c
	gcc $(CFLAGS) $(HEADER) $< -c -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
