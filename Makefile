# ===================== Config =====================
NAME     := libft.a

CC       := cc
CFLAGS   := -Wall -Wextra -Werror
CPPFLAGS := -I include
# Pour debug : make CFLAGS+=-g3

SRC_DIR  := src
OBJ_DIR  := .obj
HEADERS  := include/libft.h include/ft_printf.h

# Où installer (changer avec : make install PREFIX=~/.local)
PREFIX   ?= /usr/local

# ===================== Sources =====================
SRC := ft_atoi.c ft_bzero.c ft_calloc.c \
		ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_itoa.c ft_split.c \
		ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
		ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
		ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
		ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

PRINTF := ft_printf/ft_printf.c ft_printf/ft_putchar.c ft_printf/ft_putnbr.c

BONUS := ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c \
        ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstdelone_bonus.c \
        ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJ       := $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o) $(PRINTF:.c=.o))
BONUS_OBJ := $(addprefix $(OBJ_DIR)/, $(BONUS:.c=.o))

# ===================== Couleurs ===================

GREEN     := \033[1;32m
BLUE      := \033[1;34m
YELLOW    := \033[1;33m
RED       := \033[1;31m
RESET     := \033[0m

# ===================== Progress bar ===============
# Nombre total de fichiers à compiler (sans les bonus si on a tapé "make base")
ifeq ($(filter base,$(MAKECMDGOALS)),base)
TOTAL := $(words $(OBJ))
else
TOTAL := $(words $(OBJ) $(BONUS_OBJ))
endif
COUNT :=
BAR_LEN := 30
BAR     := ==============================

# Mode Pac-Man : activé si "ILoveCandy" est dans /etc/pacman.conf
# (forcer à la main : make CANDY=1, ou make CANDY= pour désactiver)
CANDY := $(shell grep -qs '^[[:space:]]*ILoveCandy' /etc/pacman.conf && echo 1)
DASH  := ------------------------------
DOTS  := o  o  o  o  o  o  o  o  o  o

# ===================== Règles =====================
all: $(NAME)

# Bibliothèque complète (avec les bonus)
$(NAME): $(OBJ) $(BONUS_OBJ)
	@rm -f $@
	@ar rcs $@ $^
	@printf "\n$(GREEN)✔ $@ compilée et créée (avec bonus)$(RESET)\n"

# Bibliothèque sans les bonus
base: $(OBJ)
	@rm -f $(NAME)
	@ar rcs $(NAME) $^
	@printf "\n$(GREEN)✔ $(NAME) compilée et créée (sans bonus)$(RESET)\n"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADERS) Makefile
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@
	$(eval COUNT += x)
ifeq ($(CANDY),1)
	@n=$$(( $(words $(COUNT)) * $(BAR_LEN) / $(TOTAL) )); \
	p=$$(( $(words $(COUNT)) * 100 / $(TOTAL) )); \
	if [ $$n -ge $(BAR_LEN) ]; then pac=""; r=0; rest=""; \
	else \
		if [ $$(( $(words $(COUNT)) % 2 )) -eq 0 ]; then pac=C; else pac=c; fi; \
		r=$$(( $(BAR_LEN) - n - 1 )); \
		rest=$$(printf "%s" "$(DOTS)" | cut -c$$(( n + 2 ))-); \
	fi; \
	printf "\r\033[K[%.*s$(YELLOW)%s$(RESET)%-*s] %3d%%  %s" \
		$$n "$(DASH)" "$$pac" $$r "$$rest" $$p "$(notdir $<)"
else
	@printf "\r\033[K$(BLUE)[%-$(BAR_LEN).*s] %3d%%$(RESET)  %s" \
		$$(( $(words $(COUNT)) * $(BAR_LEN) / $(TOTAL) )) "$(BAR)" \
		$$(( $(words $(COUNT)) * 100 / $(TOTAL) )) "$(notdir $<)"
endif

clean:
	@rm -rf $(OBJ_DIR)
	@printf "$(YELLOW)✗ objets supprimés$(RESET)\n"

fclean: clean
	@rm -f $(NAME)
	@printf "$(RED)✗ $(NAME) supprimé$(RESET)\n"

re: fclean all

install: all
	@install -d $(DESTDIR)$(PREFIX)/lib $(DESTDIR)$(PREFIX)/include
	@install -m 644 $(NAME) $(DESTDIR)$(PREFIX)/lib/$(NAME)
	@install -m 644 $(HEADERS) $(DESTDIR)$(PREFIX)/include/
	@printf "$(GREEN)✔ installée dans $(PREFIX)$(RESET)\n"

uninstall:
	@rm -f $(DESTDIR)$(PREFIX)/lib/$(NAME) $(addprefix $(DESTDIR)$(PREFIX)/include/, $(notdir $(HEADERS)))
	@printf "$(RED)✗ désinstallée de $(PREFIX)$(RESET)\n"

.PHONY: all base clean fclean re install uninstall
