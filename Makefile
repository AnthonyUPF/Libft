# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anthtorr <anthtorr@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/01 12:11:09 by anthtorr          #+#    #+#              #
#    Updated: 2023/10/03 14:31:45 by anthtorr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del archivo de salida
NAME = libft.a

# Lista de archivos fuente obligatorios
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
       ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
       ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
       ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
       ft_atoi.c ft_calloc.c ft_strdup.c \
       ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
       ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
       ft_putendl_fd.c ft_putnbr_fd.c

# Lista de archivos fuente adicionales
SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			 ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			 ft_lstmap.c

# Genera una lista de objetos a partir de los archivos fuente
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

# Opciones de compilación
CC = gcc
CFLAGS = -Wall -Werror -Wextra

# Regla para construir la biblioteca
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Regla por defecto
all: $(NAME)

# Regla para limpiar los archivos objeto
clean:
	rm -f $(OBJS) $(OBJS_BONUS)

# Regla para limpiar los archivos objeto y la biblioteca
fclean: clean
	rm -f $(NAME)

# Regla para recompilar todo desde cero
re:	fclean all

# Regla para construir la versión con funciones bonus
bonus: $(OBJS_BONUS)
	@if [ -f $(NAME) ]; then \
		echo "make: 'libft.a' is up to date."; \
		$(AR) rcs $(NAME) $(OBJS_BONUS); \
	else \
		$(MAKE) all; \
	fi

# Indica que "all", "clean", "fclean", "re", "bonus" no son nombres de archivos
.PHONY: all clean fclean re bonus
