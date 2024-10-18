# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jopedro- <jopedro-@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/18 16:40:49 by jopedro-          #+#    #+#              #
#    Updated: 2024/10/18 16:59:56 by jopedro-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

BUILD_PATH = .build
TEMP_PATH = .temp
LIBFT_PATH = ./libft
SRC = $(addprefix $(LIBFT_PATH)/ ft_isalpha.c ft_isdigit.c ft_isalnum.c \
			ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
			ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c \
			ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
			ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
			ft_strjoin.c ft_strtrim.c ft_spli.c ft_itoa.c ft_strmapi.c \
			ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putenddl_fd.c \
			ft_putnbr_fd.c)
OBJS = $(addprefix$(BUILD_PATH)/, $(notdir $(SRC:.c=.o)))

MAKE = make -C
FLAGS = -Wall -Wextra -Werror
FLAGS += -g
INCLUDE = -I

CC = cc
RM = rm -rf
AR = ar rcs
MKDIR_P = mkdir -p

all: $(NAME)

$(BUILD_PATH):
		$(MKDIR_P) $(BUILD_PATH)
		@echo "* Creating $(BUILD_PATH) folder: SUCCESS"

$(TEMP_PATH):
		$(MKDIR_P) $(TEMP_PATH)
		@ECHO "* Creating $(TEMP_PATH) go
