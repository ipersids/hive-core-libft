# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ipersids <ipersids@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/28 18:42:50 by ipersids          #+#    #+#              #
#    Updated: 2024/11/23 18:51:25 by ipersids         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compilation variables
CC			= clang
CFLAGS		= -Wall -Wextra -Werror
AR 			= ar
ARFLAGS 	= -rcs

# Platform-specific settings
ifeq ($(OS),Windows_NT)
    RM = del /q
    RM_DIR = rmdir /s /q
    LIB_EXT = .lib
else
    RM = rm -f
    RM_DIR = rm -rf
    LIB_EXT = .a
endif

# File names
NAME		:= libft$(LIB_EXT)
# SRCS		:= $(shell find . -type f -name 'ft_*.c')

SRCS		:= 	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
				ft_isascii.c ft_isdigit.c ft_isprint.c ft_isprint.c \
				ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
				ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
				ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c \
				ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
				ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
				ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c \
				ft_toupper.c ft_lstadd_back.c ft_lstadd_front.c \
				ft_lstclear.c ft_lstdelone.c \
				ft_lstiter.c ft_lstlast.c ft_lstmap.c \
				ft_lstnew.c ft_lstsize.c
OBJS		:= $(SRCS:%.c=%.o)



# Targets
all: $(NAME)

# Create the static library
$(NAME): $(OBJS)
	@$(AR) $(ARFLAGS) $@ $(OBJS)
	@echo "\n\033[1;30;42mLibrary $(NAME) created.\033[0m\n"

# Compile source files into object files
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled\t \033[036m$@\033[0m using $(CC) compiler and $(CFLAGS) flags."

# Clean up object files
clean:
	@$(RM) -f *.o
	@echo "Cleaned up object files."

fclean:
	@$(RM) -f *.o  $(NAME)
	@echo "Cleaned up object and executable files."

# Clean up object files and their directory
re: fclean all
	@echo "\nCleaning and rebuilding process done.\n"

# Phony targets
.PHONY: all clean re bonus fclean