/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaalsh <hamaalsh@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 21:40:14 by hamaalsh          #+#    #+#             */
/*   Updated: 2026/10/13 21:40:14 by hamaalsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HAMADS_42_LIBFT_H
#define HAMADS_42_LIBFT_H
#include <stdio.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_strlen(const char *s);
int tolower(int c);
int ft_toupper(int c);
const char *ft_strchr(const char *s, int c);
const char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t len);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
int ft_atoi(const char *str);
void *ft_memset(void *b, int c, size_t len);
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);





#endif //HAMADS_42_LIBFT_H
