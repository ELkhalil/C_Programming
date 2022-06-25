I		= includes/ft.h
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS	= ${SRCS:.c=.o}
NAME 	= libft.a
RM		= rm -f
AR		= ar -r

all: $(NAME)
$(NAME): $(OBJS)							
		$(AR) $(NAME) $(OBJS)
clean:
		$(RM) $(OBJS)
fclean:		clean
		$(RM) $(NAME)
re:		fclean all
