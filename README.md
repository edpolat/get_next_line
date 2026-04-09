_This project has been created as part of the 42 curriculum by edpolat._

# get_next_line

## Description

`get_next_line` is a function written in C that allows reading from a file descriptor line by line.

The main goal of this project is to gain a deep understanding of **static variables**, manage file reading operations, and develop proficiency in dynamic memory management (allocation/free). Although the standard C library provides functions like `getline`, this project focuses on reinventing the wheel to better grasp low-level I/O operations.

---

## Instructions

### File Structure

The project does not include a Makefile and consists of the following 3 main files:
* `get_next_line.c`: Contains the core logic of the function.
* `get_next_line_utils.c`: Includes helper functions (`ft_strlen`, `ft_strjoin`, etc.).
* `get_next_line.h`: Header file for the library.

---

### Compilation

You can compile the project using `gcc` or `cc` by adding the **BUFFER_SIZE** flag. For example, to compile with a sample `main.c`:

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c
```

## Usage

The `get_next_line` function reads a single line from the given file descriptor (`fd`) and returns it as a dynamically allocated string.

**Function Prototype:**

```c
char *get_next_line(int fd);
```

## Resourches

42 intra documantation

## AI Usage

Artificial intelligence was used in this project for the following purposes:

- Writing and organizing the README file  
- Ensuring functions comply with 42 norm rules  
- Understanding the structure and behavior of the `read` function  

The algorithmic design and implementation of the code were done by _edpolat_.
