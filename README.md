# libft

## 42 Project

This repository contains all the files for the libft project within the main curriculum of 42 Paris. It is a custom library of useful functions in the C programming language. The repository includes the `Makefile` and the `libft.h` header file.

---

## About

This project is a C library of useful functions that can be reused in future projects within the 42 school curriculum. Access to this library will make the coding process for upcoming projects more efficient. The goal of rewriting these functions is to better understand them and to acquire a broad range of tools for future projects. You can find more information in the [subject here](https://www.42paris.com/).

As stated in the subject, all files are located in the same directory.

The code in this repository follows the [Norminette](https://github.com/42School/norminette) rules.

---

## Index

### Functions from the `<ctype.h>` library
- [`ft_isascii`](https://github.com/yassn0/my_libft/blob/main/ft_isascii.c) - Checks if a character is a 7-bit ASCII character.
- [`ft_isalpha`](https://github.com/yassn0/my_libft/blob/main/ft_isalpha.c) - Checks if a character is alphabetic.
- [`ft_isdigit`](https://github.com/yassn0/my_libft/blob/main/ft_isdigit.c) - Checks if a character is a decimal digit.
- [`ft_isalnum`](https://github.com/yassn0/my_libft/blob/main/ft_isalnum.c) - Checks if a character is alphanumeric.
- [`ft_isprint`](https://github.com/yassn0/my_libft/blob/main/ft_isprint.c) - Checks if a character is printable, including a space.
- [`ft_tolower`](https://github.com/yassn0/my_libft/blob/main/ft_tolower.c) - Converts a character to lowercase.
- [`ft_toupper`](https://github.com/yassn0/my_libft/blob/main/ft_toupper.c) - Converts a character to uppercase.

### Functions from the `<stdlib.h>` library
- [`ft_atoi`](https://github.com/yassn0/my_libft/blob/main/ft_atoi.c) - Converts an ASCII string to an integer.
- [`ft_calloc`](https://github.com/yassn0/my_libft/blob/main/ft_calloc.c) - Allocates space for an array and initializes it to 0.

### Functions from the `<strings.h>` library
- [`ft_bzero`](https://github.com/yassn0/my_libft/blob/main/ft_bzero.c) - Fills the first few bytes of an object with zeros.
- [`ft_memset`](https://github.com/yassn0/my_libft/blob/main/ft_memset.c) - Fills memory with a given value.
- [`ft_memchr`](https://github.com/yassn0/my_libft/blob/main/ft_memchr.c) - Finds the first occurrence of a character in a buffer.
- [`ft_memcmp`](https://github.com/yassn0/my_libft/blob/main/ft_memcmp.c) - Compares the bytes in two buffers.
- [`ft_memmove`](https://github.com/yassn0/my_libft/blob/main/ft_memmove.c) - Copies bytes from one buffer to another, handling overlapping memory correctly.
- [`ft_memcpy`](https://github.com/yassn0/my_libft/blob/main/ft_memcpy.c) - Copies bytes from one buffer to another.

### Functions from the `<string.h>` library
- [`ft_strlen`](https://github.com/yassn0/my_libft/blob/main/ft_strlen.c) - Gets the length of a string.
- [`ft_strchr`](https://github.com/yassn0/my_libft/blob/main/ft_strchr.c) - Finds the first occurrence of a character in a string.
- [`ft_strrchr`](https://github.com/yassn0/my_libft/blob/main/ft_strrchr.c) - Finds the last occurrence of a character in a string.
- [`ft_strnstr`](https://github.com/yassn0/my_libft/blob/main/ft_strnstr.c) - Locates a substring within a string.
- [`ft_strncmp`](https://github.com/yassn0/my_libft/blob/main/ft_strncmp.c) - Compares two strings up to a specified length.
- [`ft_strdup`](https://github.com/yassn0/my_libft/blob/main/ft_strdup.c) - Creates a duplicate of a string using malloc.
- [`ft_strlcpy`](https://github.com/yassn0/my_libft/blob/main/ft_strlcpy.c) - Copies a string with a maximum size.
- [`ft_strlcat`](https://github.com/yassn0/my_libft/blob/main/ft_strlcat.c) - Concatenates a string with a maximum size.

### Non-standard functions
- [`ft_itoa`](https://github.com/yassn0/my_libft/blob/main/ft_itoa.c) - Converts an integer to an ASCII string.
- [`ft_substr`](https://github.com/yassn0/my_libft/blob/main/ft_substr.c) - Gets a substring from a string.
- [`ft_strtrim`](https://github.com/yassn0/my_libft/blob/main/ft_strtrim.c) - Removes specified characters from the start and end of a string.
- [`ft_strjoin`](https://github.com/yassn0/my_libft/blob/main/ft_strjoin.c) - Concatenates two strings into a new string using calloc.
- [`ft_split`](https://github.com/yassn0/my_libft/blob/main/ft_split.c) - Splits a string using a specified delimiter character.
- [`ft_strmapi`](https://github.com/yassn0/my_libft/blob/main/ft_strmapi.c) - Creates a new string modified by a given function.
- [`ft_striteri`](https://github.com/yassn0/my_libft/blob/main/ft_striteri.c) - Modifies a string using a given function.
- [`ft_putchar_fd`](https://github.com/yassn0/my_libft/blob/main/ft_putchar_fd.c) - Outputs a character to a given file descriptor.
- [`ft_putstr_fd`](https://github.com/yassn0/my_libft/blob/main/ft_putstr_fd.c) - Outputs a string to a given file descriptor.
- [`ft_putendl_fd`](https://github.com/yassn0/my_libft/blob/main/ft_putendl_fd.c) - Outputs a string to a given file descriptor followed by a newline.
- [`ft_putnbr_fd`](https://github.com/yassn0/my_libft/blob/main/ft_putnbr_fd.c) - Outputs an integer to a given file descriptor.

### Linked list functions (bonus)
- [`ft_lstnew_bonus`](https://github.com/yassn0/my_libft/blob/main/ft_lstnew_bonus.c) - Creates a new list.
- [`ft_lstsize_bonus`](https://github.com/yassn0/my_libft/blob/main/ft_lstsize_bonus.c) - Counts the elements in a list.
- [`ft_lstlast_bonus`](https://github.com/yassn0/my_libft/blob/main/ft_lstlast_bonus.c) - Finds the last element in a list.
- [`ft_lstadd_back_bonus`](https://github.com/yassn0/my_libft/blob/main/ft_lstadd_back_bonus.c) - Adds a new element to the end of the list.
- [`ft_lstadd_front_bonus`](https://github.com/yassn0/my_libft/blob/main/ft_lstadd_front_bonus.c) - Adds a new element to the front of the list.
- [`ft_lstdelone_bonus`](https://github.com/yassn0/my_libft/blob/main/ft_lstdelone_bonus.c) - Deletes an element from the list.
- [`ft_lstclear_bonus`](https://github.com/yassn0/my_libft/blob/main/ft_lstclear_bonus.c) - Deletes a sequence of elements from a list starting from a specified point.
- [`ft_lstiter_bonus`](https://github.com/yassn0/my_libft/blob/main/ft_lstiter_bonus.c) - Applies a function to the content of all elements in a list.
- [`ft_lstmap_bonus`](https://github.com/yassn0/my_libft/blob/main/ft_lstmap_bonus.c) - Applies a function to the content of all elements in a list.

---

## Instructions

To compile the library, run the `Makefile` in the terminal:

```bash
make

    

To clean up object files, run:

      

make clean

    

To remove all generated files, run:

      

make fclean

    

To recompile the library and the test executable, run:

      

make re

    

Tests

Non-automated tests are recommended. You can use the provided main.c file in this repository to test the various functions you have implemented.
License

This project is subject to the 42 school license. Make sure to follow the school's rules when using this code.
