#ifndef LIBFT_H
#define LIBFT_H

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_isalpha(int c);

int ft_isdigit(int c);

int ft_isalnum(int c);

int ft_isascii(int c);

int ft_isprint(int c);

size_t ft_strlen(const char *s);

int ft_toupper(int c);

int ft_tolower(int c);

 int atoi(const char *nptr);
#endif