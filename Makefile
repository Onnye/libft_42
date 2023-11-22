NAME = libft.a
SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memset.c ft_strlen.c\
ft_memmove.c ft_toupper.c ft_tolower.c ft_strncmp.c ft_atoi.c\
ft_strdup.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c\
ft_strnstr.c ft_memcmp.c ft_memchr.c ft_calloc.c ft_substr.c
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)

all: $(NAME)
#A SUPPRIMER###########
so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)
#######################

$(NAME):$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re