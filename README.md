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
- [`ft_isascii`](#ft_isascii) - Checks if a character is a 7-bit ASCII character.
- [`ft_isalpha`](#ft_isalpha) - Checks if a character is alphabetic.
- [`ft_isdigit`](#ft_isdigit) - Checks if a character is a decimal digit.
- [`ft_isalnum`](#ft_isalnum) - Checks if a character is alphanumeric.
- [`ft_isprint`](#ft_isprint) - Checks if a character is printable, including a space.
- [`ft_tolower`](#ft_tolower) - Converts a character to lowercase.
- [`ft_toupper`](#ft_toupper) - Converts a character to uppercase.

### Functions from the `<stdlib.h>` library
- [`ft_atoi`](#ft_atoi) - Converts an ASCII string to an integer.
- [`ft_calloc`](#ft_calloc) - Allocates space for an array and initializes it to 0.

### Functions from the `<strings.h>` library
- [`ft_bzero`](#ft_bzero) - Fills the first few bytes of an object with zeros.
- [`ft_memset`](#ft_memset) - Fills memory with a given value.
- [`ft_memchr`](#ft_memchr) - Finds the first occurrence of a character in a buffer.
- [`ft_memcmp`](#ft_memcmp) - Compares the bytes in two buffers.
- [`ft_memmove`](#ft_memmove) - Copies bytes from one buffer to another, handling overlapping memory correctly.
- [`ft_memcpy`](#ft_memcpy) - Copies bytes from one buffer to another.

### Functions from the `<string.h>` library
- [`ft_strlen`](#ft_strlen) - Gets the length of a string.
- [`ft_strchr`](#ft_strchr) - Finds the first occurrence of a character in a string.
- [`ft_strrchr`](#ft_strrchr) - Finds the last occurrence of a character in a string.
- [`ft_strnstr`](#ft_strnstr) - Locates a substring within a string.
- [`ft_strncmp`](#ft_strncmp) - Compares two strings up to a specified length.
- [`ft_strdup`](#ft_strdup) - Creates a duplicate of a string using malloc.
- [`ft_strlcpy`](#ft_strlcpy) - Copies a string with a maximum size.
- [`ft_strlcat`](#ft_strlcat) - Concatenates a string with a maximum size.

### Non-standard functions
- [`ft_itoa`](#ft_itoa) - Converts an integer to an ASCII string.
- [`ft_substr`](#ft_substr) - Gets a substring from a string.
- [`ft_strtrim`](#ft_strtrim) - Removes specified characters from the start and end of a string.
- [`ft_strjoin`](#ft_strjoin) - Concatenates two strings into a new string using calloc.
- [`ft_split`](#ft_split) - Splits a string using a specified delimiter character.
- [`ft_strmapi`](#ft_strmapi) - Creates a new string modified by a given function.
- [`ft_striteri`](#ft_striteri) - Modifies a string using a given function.
- [`ft_putchar_fd`](#ft_putchar_fd) - Outputs a character to a given file descriptor.
- [`ft_putstr_fd`](#ft_putstr_fd) - Outputs a string to a given file descriptor.
- [`ft_putendl_fd`](#ft_putendl_fd) - Outputs a string to a given file descriptor followed by a newline.
- [`ft_putnbr_fd`](#ft_putnbr_fd) - Outputs an integer to a given file descriptor.

### Linked list functions (bonus)
- [`ft_lstnew`](#ft_lstnew) - Creates a new list.
- [`ft_lstsize`](#ft_lstsize) - Counts the elements in a list.
- [`ft_lstlast`](#ft_lstlast) - Finds the last element in a list.
- [`ft_lstadd_back`](#ft_lstadd_back) - Adds a new element to the end of the list.
- [`ft_lstadd_front`](#ft_lstadd_front) - Adds a new element to the front of the list.
- [`ft_lstdelone`](#ft_lstdelone) - Deletes an element from the list.
- [`ft_lstclear`](#ft_lstclear) - Deletes a sequence of elements from a list starting from a specified point.
- [`ft_lstiter`](#ft_lstiter) - Applies a function to the content of all elements in a list.
- [`ft_lstmap`](#ft_lstmap) - Applies a function to the content of all elements in a list.

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
