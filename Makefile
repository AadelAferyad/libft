NAME:= libft.a
CFLAGS := -Wall -Werror -Wextra
CC := cc
FILES := ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c\
	 ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c\
	 ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c\
	 ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

BONUS_FILES:=  ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c 

OBJ_FILES:= $(FILES:.c=.o)

OBJ_BONUS:= $(BONUS_FILES:.c=.o)

all: archive

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@	

archive: $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)
	rm -rf $(OBJ_FILES)

bonus: $(OBJ_BONUS) 
	ar rcs $(NAME) $(OBJ_BONUS)
	rm -rf $(OBJ_BONUS)

clean:
	rm -f $(OBJ_FILES) $(OBJ_BONUS)
fclean:
	rm -f $(OBJ_FILES) $(OBJ_BONUS) $(NAME)

re: fclean all
