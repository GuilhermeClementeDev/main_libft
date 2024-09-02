#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <ctype.h>
#include <stdio.h>
#include <bsd/string.h>
#include <stdlib.h>
#include <string.h>

int ft_isalpha(int c);

int ft_isdigit(int c);

int ft_isalnum(int c);

int ft_isascii(int c);

int ft_isprint(int c);

size_t ft_strlen(const char *s);

int ft_toupper(int c);

int ft_tolower(int c);

 int ft_atoi(const char *nptr);

 size_t ft_strlcpy(char *dst, const char *src, size_t size);

 size_t ft_strlcat(char *dst, const char *src, size_t size);


#endif