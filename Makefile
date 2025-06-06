NAME    = libasm.a

ASM     = src/ft_strlen.s src/ft_strcpy.s src/ft_strcmp.s src/ft_write.s src/ft_read.s src/ft_strdup.s

OBJS    = $(ASM:.s=.o)

NASM    = nasm
NASMFLAGS = -f elf64

AR      = ar
ARFLAGS = rcs

CFLAGS  = -Wall -Wextra -Werror

# Optional: For testing
TEST    = main
TEST_SRC = main.c
TEST_OBJS = $(OBJS)
TEST_EXE = $(TEST)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.s
	$(NASM) $(NASMFLAGS) $< -o $@

$(TEST): $(NAME) $(TEST_SRC)
	clang $(CFLAGS) $(TEST_SRC) $(NAME) -o $(TEST_EXE)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) $(TEST_EXE)

re: fclean all

.PHONY: all clean fclean re main
