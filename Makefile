SRCS		= Filespipex.c	errors.c	childcreator.c	free.c	pipex.c	what.c ./libft/get_next_line_bonus.c   ./libft/get_next_line_utils_bonus.c	./libft/ft_bzero.c ./libft/ft_isalnum.c ./libft/ft_isascii.c ./libft/ft_isalpha.c ./libft/ft_isdigit.c ./libft/ft_isprint.c ./libft/ft_memchr.c ./libft/ft_memcmp.c   ./libft/ft_memcpy.c ./libft/ft_memmove.c ./libft/ft_memset.c ./libft/ft_strchr.c    ./libft/ft_strlcat.c ./libft/ft_strlcpy.c ./libft/ft_strlen.c ./libft/ft_strncmp.c ./libft/ft_strrchr.c ./libft/ft_tolower.c ./libft/ft_toupper.c ./libft/ft_strnstr.c ./libft/ft_calloc.c ./libft/ft_strdup.c  ./libft/ft_atoi.c ./libft/ft_substr.c   ./libft/ft_strjoin.c    ./libft/ft_strtrim.c    ./libft/ft_itoa.c   ./libft/ft_split.c  ./libft/ft_strmapi.c    ./libft/ft_striteri.c   ./libft/ft_putchar_fd.c ./libft/ft_putstr_fd.c  ./libft/ft_putendl_fd.c ./libft/ft_putnbr_fd.c
OBJS		= ${SRCS:.c=.o}
NAME		= pipex
LIB			= ./libft/libft.a
LIBEXT		= libft.a
CC			= cc
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror
.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
all:		${NAME}

bonus:		${OBJS} ${LIBEXT}
			${CC} ${CFLAGS} ${OBJS} ${LIBEXT} -o	${NAME}

${LIB}:		
			cd ./libft
			@make bonus -sC ./libft/
			cd ..

${LIBEXT}:	${LIB}
			cp ${LIB}	${LIBEXT}

${NAME}:	${OBJS} ${LIBEXT}
			${CC} ${CFLAGS} ${OBJS} ${LIBEXT} -o	${NAME}
				
clean:
			${RM} ${OBJS} ${LIBEXT} ${LIB}
fclean:		clean
				${RM} ${NAME}
re:			fclean all
.PHONY:		all	clean	bonus	fclean	re

