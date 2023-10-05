SRCS    = ft_bzero.c ft_isalnum.c ft_isascii.c ft_isalpha.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c	ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c	ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strrchr.c	ft_tolower.c ft_toupper.c ft_strnstr.c ft_calloc.c ft_strdup.c	ft_atoi.c ft_substr.c	ft_strjoin.c	ft_strtrim.c	ft_itoa.c	ft_split.c	ft_strmapi.c	ft_striteri.c	ft_putchar_fd.c	ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c	get_next_line_bonus.c   get_next_line_utils_bonus.c
OBJS    = ${SRCS:.c=.o}
NAME    = libft.a
CC  = gcc
RM  = rm -f
CFLAGS  = -Wall -Wextra -Werror
AR = ar -rc
.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
all:        ${NAME}

bonus:		${NAME}

${NAME}:	${OBJS}
				${AR} ${NAME} ${OBJS}
				ranlib ${NAME}
clean:
				${RM} ${OBJS}
fclean:     clean
				${RM} ${NAME} 
re:         fclean all
.PHONY:     all	clean	fclean	re
