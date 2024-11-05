NAME =	libft.a

BUILD_PATH	= .build
LIBFT_PATH = ./libft
SRC =	$(addprefix $(LIBFT_PATH)/, ft_isalpha.c ft_isdigit.c ft_isalnum.c \
		ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c \
		ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_memcmp.c\
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_strnstr.c ft_putnbr_fd.c)

BONUS = $(addprefix $(LIBFT_PATH)/, ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
		ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
		ft_lstiter.c ft_lstmap.c)

EXTRA = $(addprefix $(LIBFT_PATH)/, ft_unumlen.c ft_uitoa.c)
		##ft_ptrlen.c ft_putptr.c)  ft_unumlen.c ft_printnbr.c

OBJS		= $(addprefix $(BUILD_PATH)/, $(notdir $(SRC:.c=.o)))
BONUS_OBJS	= $(addprefix $(BUILD_PATH)/, $(notdir $(BONUS:.c=.o)))
EXTRA_OBJS  = $(addprefix $(BUILD_PATH)/, $(notdir $(EXTRA:.c=.o)))

### Message Vars
_NAME	 		= [$(MAG)libft$(D)]
_SUCCESS 		= [$(GRN)SUCCESS$(D)]
_INFO 			= [$(BLU)INFO$(D)]
_NORM 			= [$(YEL)Norminette$(D)]
_NORM_SUCCESS 	= $(GRN)=== OK:$(D)
_NORM_INFO 		= $(BLU)File no:$(D)

#==============================================================================#
#                            FLAGS & CMDS                                      #
#==============================================================================#

MAKE		= make -C
CFLAGS		= -Wall -Wextra -Werror
CFLAGS		+= -g
# CFLAGS		+= -lm
INCLUDE 	= -I.

CC 			= cc
RM 			= rm -rf
AR 			= ar rcs
MKDIR_P		= mkdir -p

#==============================================================================#
#                                  RULES                                       #
#==============================================================================#

##@ Libft Compilation Rules 🏗

all: $(NAME)	## Compile Basic libft

$(BUILD_PATH):
	$(MKDIR_P) $(BUILD_PATH)
	@echo "* $(YEL)Creating $(BUILD_PATH) folder:$(D) $(_SUCCESS)"

$(TEMP_PATH):
	$(MKDIR_P) $(TEMP_PATH)
	@echo "* $(YEL)Creating $(CYA)$(TEMP_PATH)$(YEL) folder:$(D) $(_SUCCESS)"

$(BUILD_PATH)/%.o: $(LIBFT_PATH)/%.c
	@echo -n "$(GRN)█$(D)"
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(BUILD_PATH) $(OBJS)
	@echo "* $(YEL)Archiving $(_NAME) archive$(D)"
	$(AR) $(NAME) $(OBJS)
	@echo "* $(_NAME) archived: $(_SUCCESS) $(YEL)🖔$(D)"

bonus: $(BUILD_PATH) $(OBJS) $(BONUS_OBJS)
	@echo "* $(YEL)Archiving $(_NAME) w/ bonus$(D)"
	$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)
	@echo "* $(_NAME) archived w/ bonus: $(_SUCCESS) $(YEL)🖔$(D)"

extra: $(BUILD_PATH) $(OBJS) $(BONUS_OBJS) $(EXTRA_OBJS) ## Compile libft with extra
	@echo "* $(YEL)Archiving $(_NAME) w/ extras$(D)"
	$(AR) $(NAME) $(OBJS) $(BONUS_OBJS) $(EXTRA_OBJS)
	@echo "* $(_NAME) archived w/ extras: $(_SUCCESS) $(YEL)🖔$(D)"

##@ Clean-up Rules 󰃢

clean:			## Clean libft binaries
	@echo "* $(RED)Removing libft binaries$(D)"
	$(RM) $(OBJS) $(BONUS_OBJS) $(EXTRA_OBJS) 
	@echo "* $(YEL)Cleaning libft binaries!$(D) $(_SUCCESS) $(YEL)🖔$(D)"

fclean: clean	## Clean libft archive
	@echo "* $(RED)Removing $(NAME) archive and .build directory$(D)"
	$(RM) $(NAME)
#	$(RM) $(BUILD_PATH)
	@echo "* $(YEL)Cleaning $(NAME) archive and .build directory!$(D) $(_SUCCESS) $(YEL)🖔$(D)"

re: fclean	all ## Clean and re-compile libft
	@echo "* Cleaning & re-compiling libft!=: $(_SUCCESS) $(YEL)🖔$(D)"

##@ Help 󰛵

help: 			## Display this help page
	@awk 'BEGIN {FS = ":.*##"; \
			printf "\n=> Usage:\n\tmake $(GRN)<target>$(D)\n"} \
		/^[a-zA-Z_0-9-]+:.*?##/ { \
			printf "\t$(GRN)%-15s$(D) %s\n", $$1, $$2 } \
		/^##@/ { \
			printf "\n=> %s\n", substr($$0, 5) } ' Makefile
## Tweaked from source:
### https://www.padok.fr/en/blog/beautiful-makefile-awk

.PHONY: all bonus extra clean fclean re help

#==============================================================================#
#                                  UTILS                                       #
#==============================================================================#

# Colors
#
# Run the following command to get list of available colors
# bash -c 'for c in {0..255}; do tput setaf $c; tput setaf $c | cat -v; echo =$c; done'
#
B  		= $(shell tput bold)
BLA		= $(shell tput setaf 0)
RED		= $(shell tput setaf 1)
GRN		= $(shell tput setaf 2)
YEL		= $(shell tput setaf 3)
BLU		= $(shell tput setaf 4)
MAG		= $(shell tput setaf 5)
CYA		= $(shell tput setaf 6)
WHI		= $(shell tput setaf 7)
GRE		= $(shell tput setaf 8)
BRED 	= $(shell tput setaf 9)
BGRN	= $(shell tput setaf 10)
BYEL	= $(shell tput setaf 11)
BBLU	= $(shell tput setaf 12)
BMAG	= $(shell tput setaf 13)
BCYA	= $(shell tput setaf 14)
BWHI	= $(shell tput setaf 15)
D 		= $(shell tput sgr0)
BEL 	= $(shell tput bel)
CLR 	= $(shell tput el 1)
