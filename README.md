*This project has been created as part of the 42 curriculum by hamaalsh.*

# libft

## Description

libft is the first project of the 42 curriculum. Its goal is to re-implement a
set of standard C library functions from scratch, along with some additional
utility functions, and to bundle them into a static library (`libft.a`) that
can be reused in future C projects at 42.

## Instructions

### Compilation

The library is built with `make`, using `cc` and the mandatory 42 flags
(`-Wall -Wextra -Werror`):

```sh
make        # builds libft.a
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # rebuilds from scratch
```

### Usage

Include the header and link against the library:

```c
#include "libft.h"
```

```sh
cc main.c -L. -lft -o my_program
```

## Library contents

### Part 1 — libc re-implementations

Character checks and conversions: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`,
`ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`.

Memory functions: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`,
`ft_memchr`, `ft_memcmp`, `ft_calloc`.

String functions: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`,
`ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_atoi`.

These behave like their libc counterparts (see the corresponding man pages).

### Part 2 — Additional functions

Helpers that are not in the libc but come up constantly in C projects:

- `ft_substr` — extract a substring from a string.
- `ft_strjoin` — concatenate two strings into a newly allocated one.
- `ft_strtrim` — trim a set of characters from both ends of a string.
- `ft_split` — split a string into an array of strings using a delimiter.
- `ft_itoa` — convert an integer to a string.
- `ft_strmapi` / `ft_striteri` — apply a function to each character of a
  string, with its index.
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` — write a
  character, string, line, or number to a given file descriptor.

### Part 3 — Linked lists

A singly linked list API built around `t_list` (a node holding a `void
*content` and a `next` pointer):

- `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back` — create nodes and add them
  at either end of a list.
- `ft_lstsize`, `ft_lstlast` — measure and traverse a list.
- `ft_lstdelone`, `ft_lstclear` — free a node or an entire list, using a
  caller-provided delete function for the content.
- `ft_lstiter`, `ft_lstmap` — apply a function to every node's content,
  in place or into a newly allocated list.

## Resources

- The man pages of the original functions (`man 3 strlcpy`, `man 3 memmove`,
  etc.) — the primary reference for expected behaviour and edge cases.
- [The C Programming Language — Kernighan & Ritchie](https://en.wikipedia.org/wiki/The_C_Programming_Language)
- [Beej's Guide to C Programming](https://beej.us/guide/bgc/)
- [Tripouille/libftTester](https://github.com/Tripouille/libftTester) — the
  tester used to validate the library against libc behaviour.

### AI usage

AI (Claude Code) was used as a study and review aid during this project: to
review already-written functions for edge cases and undefined behaviour
(e.g. `ft_split` memory handling), to explain the expected behaviour of the
libc originals, and to help interpret tester failures. All functions were
written by hand, and every suggestion was understood before being applied.