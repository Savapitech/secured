##
## EPITECH PROJECT, 2024
## makefile
## File description:
## makefile
##

NAME = libmy.a

SRCS = functions/int/e_compute_power_rec.c \
       functions/int/e_compute_square_root.c \
       functions/int/e_getnbr.c \
       functions/int/e_nb_len.c \
       functions/int/e_str_isnum.c \
       functions/print/e_print_tab.c \
       functions/print/e_putchar.c \
       functions/print/e_putstr.c \
       functions/str/e_revstr.c \
       functions/str/e_strcat.c \
       functions/str/e_strlen.c
       functions/str/e_strdup.c \
       functions/str/e_strncpy.c \
       functions/str/e_strncat.c \
       functions/str/e_strcpy.c \
       functions/tab/e_len_tab.c

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra

CFLAGS += -I/include

CS = coding-style . .

all: $(NAME)

$(NAME): $(OBJS)
	cp -f eyes.h -I/include
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) ../$(NAME)

re: fclean all

cs: fclean
	$(CS)
