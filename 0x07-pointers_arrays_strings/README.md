# 0x07. C - Even more pointers, arrays, and strings

![Image](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/218/58fe6b229144b7fe5ebe88afe9ff5cabe2dd0863e1e79b2d02b4103c30b465dd.jpg)


This repository contains solutions to the tasks of the "0x07. C - Even more pointers, arrays, and strings" project at ALX - Holberton School.

## Files

### 0-memset.c

Write a function that fills memory with a constant byte.

- Prototype: `char *_memset(char *s, char b, unsigned int n);`
- The `_memset()` function fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`.
- Returns a pointer to the memory area `s`.

### 1-memcpy.c

Write a function that copies memory area.

- Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`
- The `_memcpy()` function copies `n` bytes from the memory area `src` to the memory area `dest`.
- Returns a pointer to `dest`.

### 2-strchr.c

Write a function that locates a character in a string.

- Prototype: `char *_strchr(char *s, char c);`
- Returns a pointer to the first occurrence of the character `c` in the string `s`, or `NULL` if the character is not found.

### 3-strspn.c

Write a function that gets the length of a prefix substring.

- Prototype: `unsigned int _strspn(char *s, char *accept);`
- Returns the number of bytes in the initial segment of `s` which consist only of bytes from `accept`.

### 4-strpbrk.c

Write a function that searches a string for any of a set of bytes.

- Prototype: `char *_strpbrk(char *s, char *accept);`
- The `_strpbrk()` function locates the first occurrence in the string `s` of any of the bytes in the string `accept`.
- Returns a pointer to the byte in `s` that matches one of the bytes in `accept`, or `NULL` if no such byte is found.

## How to Use

To compile the C files, you can use the following command format:

gcc -Wall -Werror -Wextra -pedantic <file-name.c> -o <output-file-name>

Replace `<file-name.c>` with the name of the C file you want to compile and `<output-file-name>` with the desired name for the executable.

