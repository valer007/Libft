# Libft

Libft is a custom implementation of the standard C library functions. This project, part of the 42 School curriculum, aims to strengthen understanding of C programming, memory management, and fundamental algorithms.

## Table of Contents
- [Introduction](#introduction)
- [Installation](#installation)
- [Usage](#usage)
- [Functions Implemented](#functions-implemented)

## Introduction
Libft is a personal library of commonly used C functions, designed to be a useful resource for future projects. The functions include standard libc functions, additional string manipulation utilities, linked list handling, and more.

## Installation
To compile the library, run the following command:

```sh
make
```

This will generate a static library file `libft.a` that can be linked to other projects.

To clean object files:
```sh
make clean
```

To remove all generated files:
```sh
make fclean
```

To recompile everything:
```sh
make re
```

To compile bonus part:
```sh
make bonus
```

## Usage
To use Libft in your projects, include the header file and link the library:

```c
#include "libft.h"
```

Compile your program with:
```sh
gcc your_program.c -L. -lft -o your_program
```

## Functions Implemented
The following functions have been implemented:

### Part 1 - Standard Library Functions
- `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- `ft_strlen`, `ft_strdup`, `ft_strcpy`, `ft_strncpy`, `ft_strcat`, `ft_strncat`
- `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strstr`, `ft_strnstr`
- `ft_strcmp`, `ft_strncmp`
- `ft_atoi`, `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- `ft_toupper`, `ft_tolower`

### Part 2 - Additional Functions
- `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Bonus - Linked List Functions
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`
- `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

