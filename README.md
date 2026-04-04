# _printf

## Description

_printf is a custom implementation of the standard printf function in C.

---

## Supported specifiers

- %c
- %s
- %%

---

## Prototype

int _printf(const char *format, ...);

---

## Compilation

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

---

## Files

main.h
_printf.c
handle_print.c
print_char.c
print_string.c
print_percent.c
utils.c

---

## Return

Returns the number of characters printed.

---

## Authors

Mathieu Bailliez
Ulysse Dewaleyne
