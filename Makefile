NAME	= libftprintf.a

SRCS		= ft_printf.c ft_printf_utils.c ft_printf_utils2.c
SRCS_BONUS	= ${SRCS} 
RM		= rm -f

HEAD	= ft_printf.h

CFLAGS	= -Wall -Werror -Wextra

OBJS	=${SRCS:.c=.o}

OBJS_BONUS	= ${SRCS_BONUS:.c=.o}

all:	${NAME}

${NAME}:	${OBJS} ${HEAD}
			ar rc ${NAME} ${OBJS}
			ranlib	${NAME}

bonus:	${OBJS_BONUS} ${HEAD}
		ar rc ${NAME} ${OBJS_BONUS}
		ranlib ${NAME}


clean:	
		${RM} ${OBJS_BONUS}

fclean:	clean
		${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re bonus
