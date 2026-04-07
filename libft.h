/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 02:58:27 by marvin            #+#    #+#             */
/*   Updated: 2026/03/11 02:58:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
#define FT_LIBFT_H

//#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
size_t  ft_strlen(const char *s);
void    *ft_memset(void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
int     ft_toupper(int c);
int     ft_tolower(int c);
char    *ft_strchr(const char *string, int searchedChar);
char    *ft_strrchr(const char *string, int searchedChar);
int     ft_strncmp(const char *first, const char *second, size_t length);
void    *ft_memchr(const void *memoryBlock, int searchedChar, size_t size);
int     ft_memcmp(const void *pointer1, const void *pointer2, size_t size);
char    *ft_strnstr(const char *big, const char *little, size_t len);
int     ft_atoi(const char * theString);

#endif