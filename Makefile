NAME =		libftprintf.a

HEADER =	ft_printf.h

SRCS =		nobonus_ft_printf.c\
			libft_for_printf/len.c\
			libft_for_printf/put_write.c\
			printf_fonctions/bitshifting_conv_hexa.c\
			printf_fonctions/checks.c\
			printf_fonctions/conversions.c\
			printf_fonctions/flags.c\
			main.c\

OBJS =		$(SRCS:.c=.o)

#BONUS =

#BONUS_OBJS = $(BONUS:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

AR = ar -rc

RM = rm -f

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	ranlib $(NAME)

$(BONUS): $(OBJS) $(BONUS_OBJS)
	$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)
	ranlib $(BONUS)

.c.o:
	$(CC) $(CFLAGS) -c -I $(HEADER) $< -o ${<:.c=.o}

test:
	$(CC) $(CFLAGS) $(HEADER) $(SRCS)

all: $(NAME)

bonus : $(BONUS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
