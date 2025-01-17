# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pconde-c <pconde-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/15 17:24:53 by pconde-c          #+#    #+#              #
#    Updated: 2020/01/21 18:34:06 by pconde-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRC		=	ft_atoi.c\
			ft_bzero.c\
			ft_calloc.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_memccpy.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_memset.c\
			ft_strchr.c\
			ft_strlcat.c\
			ft_strlcpy.c\
			ft_strlen.c\
			ft_strlcat.c\
			ft_strncmp.c\
			ft_strrchr.c\
			ft_strnstr.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_isdigit.c\
			ft_strdup.c\
			ft_substr.c\
			ft_strjoin.c\
			ft_itoa.c\
			ft_putchar_fd.c\
			ft_putnbr_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_strmapi.c\
			

SRB		=	ft_lstadd_back_bonus.c\
			ft_lstadd_front_bonus.c\
			ft_lstclear_bonus.c\
			ft_lstdelone_bonus.c\
			ft_lstiter_bonus.c\
			ft_lstlast_bonus.c\
			ft_lstmap_bonus.c\
			ft_lstnew_bonus.c\
			ft_lstsize_bonus.c\

OBJ		=	$(SRC:.c=.o)
OBB		=	$(SRB:.c=.o)

AR		=	ar rcs
CC		=	cc
FLAGS	=	-Wall -Werror -Wextra

all:		$(NAME)

$(NAME):	$(OBJ)
			@$(AR) $(NAME) $(OBJ)

%.o:		%.c
			@$(CC) $(FLAGS) -c $< -o $@

clean:
			@rm -f $(OBJ) $(OBB)
fclean:		clean
			@rm -f $(NAME)

re:			fclean	all

bonus:		$(OBB)
			@$(AR) $(NAME) $(OBB)
main:		$(OBJ) $(OBB)
			@$(CC) $(FLAGS) $(OBJ) $(OBB) main.c
			./a.out
