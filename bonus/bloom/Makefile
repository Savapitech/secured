##
## EPITECH PROJECT, 2024
## radar
## File description:
## ./Makefile
##

MAKEFLAGS += -j

NAME := bloom

SRC := $(wildcard *.c)

BUILD_DIR := .build

OBJ := $(SRC:%.c=$(BUILD_DIR)/%.o)

CC := gcc

CFLAGS += -Wall -Wextra
CFLAGS += -iquote ./include
CFLAGS += -Wno-unused-parameter -Wunused-result -fanalyzer
CFLAGS += -Wp,-U_FORTIFY_SOURCE -Wcast-qual -Wduplicated-branches
CFLAGS += -Wduplicated-cond -Wformat=2 -Wshadow
CFLAGS += -Wstrict-aliasing=0 -Wstrict-prototypes -Wunreachable-code
CFLAGS += -Wwrite-strings -Werror=declaration-after-statement
CFLAGS += -Werror=format-nonliteral -Werror=int-conversion -Werror=return-type
CFLAGS += -Werror=vla-larger-than=0 -Wno-discarded-qualifiers

include ../../utils.mk

all: $(NAME)

$(BUILD_DIR)/%.o: %.c
	@ mkdir -p $(dir $@)
	@ $(CC) $(CFLAGS) -o $@ -c $<
	@ $(LOG_TIME) "$(C_GREEN) CC $(C_PURPLE) $(notdir $@) $(C_RESET)"

$(NAME): $(OBJ)
	@ $(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@ $(LOG_TIME) "$(C_CYAN) AR $(C_PURPLE) $(notdir $@) $(C_RESET)"
	@ $(LOG_TIME) "$(C_GREEN) OK  Compilation finished $(C_RESET)"

clean:
	@ $(RM) $(OBJ)
	@ $(LOG_TIME) "$(C_YELLOW) RM $(C_PURPLE) $(OBJ) $(C_RESET)"

fclean:
	@ $(RM) -r $(NAME) $(BUILD_DIR)
	@ $(LOG_TIME) "$(C_YELLOW) RM $(C_PURPLE) $(NAME) $(BUILD_DIR) $(C_RESET)"

.NOTPARALLEL: re
re:	fclean all

.PHONY: all clean fclean re
