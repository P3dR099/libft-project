NAME	=	libft.a

SRC		=	ft_atoi.c\
			ft_isalpha.c\
			ft_memcpy.c\
			ft_memset.c\
			ft_strlcpy.c\
			ft_strlen.c\
			ft_strlcat.c\
			ft_strncmp.c\
			ft_toupper.c\
			ft_isdigit.c\
			

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