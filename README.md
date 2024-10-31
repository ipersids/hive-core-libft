# Libft static C library
The Libft project is an essential part of the [Hive Helsinki (42 School Network)](https://www.hive.fi/en/curriculum) core curriculum that involves recreating a custom C library from scratch. It focuses on implementing fundamental functions from the standard C library and not only, such as memory manipulation, string operations, and linked list management.  

The project helps develop a deep understanding of low-level programming, memory management, and efficient coding practices, forming a strong foundation for future projects in systems programming and algorithm optimization.  

## Features  
This section provides detailed information about the libft library functions, organized into collapsible categories. Click on each category below to expand and view the table of functions, including their descriptions and statuses:
<details>
<summary><b>Memory Management Functions</b></summary>
Functions related to memory allocation and manipulation.

| Function        | Description                                           |
| :--------------: | ----------------------------------------------------- |
| `ft_bzero`       | Sets the first n bytes of the memory area to zero.   |
| `ft_calloc`      | Allocates memory for an array and initializes it to zero. |
| `ft_memchr`      | Locates the first occurrence of a byte in memory.    |
| `ft_memcmp`      | Compares the first n bytes of two memory areas.      |
| `ft_memcpy`      | Copies n bytes from one memory area to another.      |
| `ft_memmove`     | Moves n bytes from one memory area to another.      |
| `ft_memset`      | Fills the first n bytes of the memory area with a constant byte. |

</details>

<details>
<summary><b>String Manipulation Functions</b></summary>
Functions for handling and processing strings.

| Function        | Description                                           |
| :--------------: | ----------------------------------------------------- |
| `ft_atoi`        | Converts a string to an integer.                     |
| `ft_strdup`      | Duplicates a string.                                |
| `ft_strchr`      | Locates the first occurrence of a character in a string. |
| `ft_strlcat`     | Appends a string to another with size limit.        |
| `ft_strlcpy`     | Copies a string with size limit.                    |
| `ft_strlen`      | Returns the length of a string.                     |
| `ft_strncmp`     | Compares n bytes of two strings.                    |
| `ft_strnstr`     | Finds the first occurrence of a substring in a string. |
| `ft_strrchr`     | Locates the last occurrence of a character in a string. |
| `ft_strtrim`     | Removes leading and trailing characters from a string. |
| `ft_split`       | Splits a string into an array of substrings.        |
| `ft_strmapi`     | Applies a function to each character of a string and creates a new string. |
| `ft_substr`      | Extracts a substring from a string.                 |
| `ft_strjoin`     | Concatenates two strings into a new string.         |
| `ft_itoa`        | Converts an integer to a string.                    |
| `ft_striteri`    | Apply given function to each character of given string. |

</details>

<details>
<summary><b>Character Classification Functions</b></summary>
Functions for character testing and conversion.

| Function        | Description                                          |
| :-------------: | ---------------------------------------------------- |
| `ft_isalnum`     | Checks if a character is alphanumeric.              |
| `ft_isalpha`     | Checks if a character is alphabetic.                |
| `ft_isascii`     | Checks if a character is an ASCII character.        |
| `ft_isdigit`     | Checks if a character is a digit.                   |
| `ft_isprint`     | Checks if a character is printable.                 |
| `ft_toupper`     | Converts a character to uppercase.                  |
| `ft_tolower`     | Converts a character to lowercase.                  |

</details>

<details>
<summary><b>Linked List Functions</b></summary>
Functions for managing linked lists.

| Function        | Description                                           |
| ---------------- | ----------------------------------------------------- |
| `ft_lstadd_back` | Adds a new element at the end of the list.           |
| `ft_lstadd_front`| Adds a new element at the beginning of the list.    |
| `ft_lstclear`    | Deletes and frees all elements of the list.         |
| `ft_lstdelone`   | Deletes and frees a single element of the list.     |
| `ft_lstiter`     | Iterates over a list and applies a function to each element. |
| `ft_lstlast`     | Returns the last element of the list.               |
| `ft_lstmap`      | Applies a function to each element of the list and creates a new list. |
| `ft_lstnew`      | Creates a new list element.                         |
| `ft_lstsize`     | Returns the number of elements in the list.         |

</details>

<details>
<summary><b>Other Utility Functions</b></summary>
Additional functions for various utilities.

| Function        | Description                                           |
| ---------------- | ----------------------------------------------------- |
| `ft_putchar_fd` | Writes a character to a file descriptor.             |
| `ft_putendl_fd`  | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd`   | Writes an integer to a file descriptor.             |
| `ft_putstr_fd`   | Writes a string to a file descriptor.               |

</details>

## Project Structure
Below is an overview of the project's directory structure. The project is currently ongoing, and this information will be updated as development progresses.  

```css
sfml-playground/
│
├── .gitignore
├── Makefile                # Building project tool
├── README.md               # Instractions
├── ft_atoi.c               # Functions without _bunnus suffics is mandatory
├── ft_bzero.c
├── ft_calloc.c
├── ...
├── ft_lstadd_back_bonus.c  # Bonus functions to manage linked lists
├── ...
├── ft_toupper.c
└── libft.h                 # Header file

```
## Where to start  
### Installation  
To use this library in your project, follow these steps:  
1. **Clone the Repository.**  
```sh
git clone https://github.com/ipersids/42-libft.git
cd 42-libft
```
2. **Build the Library.**    
Use the Makefile to compile the source files and create the static library.   
```sh
make all
```
Commands:   
- `make all` will build a static library containing the mandatory functions.  
- `make clean' will remove all `.o' files from the directory.  
- `make fclean' will remove all `.o' and executable files.  
- `make re` will trigger the `fclean` command and rebuild the mandatory functions.  
- `make bonus` will add bonus functions to the library (or create a library with all functions if it doesn't exist yet).

3. **Include the Header File** in your source code.
```c
#include "libft.h"
```
4. **Include the Library in the Project.**  
Link the static library in your project's build process to use the functions as described in the header file. For example, if using `gcc`, you can compile and link your project with the library as follows:
```sh
gcc -I<folder_path> -o program_name program_name.c -L<lib_path> -lft

```  
Flags and arguments:    
- `-I<folder_path>` tells the compiler to look in the specified directory for any header files included in the source code.   
- `-o program_name` is the name of the output file.  
- `program_name.c` is the name of the source file to be compiled.   
- `-L<lib_path>` tells the linker to look in the specified directory for any libraries specified with the `-l` option.  
- `-lft` tells the linker to link the program with the `libft.a` library (the lib prefix and the `.a` extension are automatically added by the linker).  

Recommended additional flags:  
- `-Wall -Wextra -Werror` to enable warning messages and to tell the compiler.
______________
Developed by **Julia Persidskaia**.   
[LinkedIn](https://www.linkedin.com/in/iuliia-persidskaia/)
