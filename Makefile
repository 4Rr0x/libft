NAME = libft.a

BUILD_PATH = .build
TEMP_PATH = .temp
LIBFT_PATH = ./libft
SRC = $(addprefix $(LIBFT_PATH)/, ft_isalpha.c ft_isdigit.c ft_isalnum.c \
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
		@echo "* Creating $(TEMP_PATH) folder: SUCCESS"

$(BUILD_PATH)/%.o: $(LIBFT_PATH)/%.C
		$(CC) $(CFLAGS) -c < -o $@

$(NAME): $(BUILD_PATH) $(OBJS)
		$(AR) $(NAME) $(OBJS)

extra: $(BUILD_PATH) $(OBJS)
		$(AR) $(NAME) $(OBJS)

clean:
		@echo "* Removing libft binaries"
		$(RM) $(OBJS)
		@echo "* Removing libft libraries! SUCCESS!"

fclean: clean
		@echo "* Removing $(NAME) archive and .build directory"
		$(RM) $(NAME)
		$(RM) $(BUILD_PATH)
		@echo "* Removing $(NAME) archive and .build directory! SUCESS!"

re: fclean extra
		@echo "* Cleaning & re-compiling libft!=: SUCCESS
