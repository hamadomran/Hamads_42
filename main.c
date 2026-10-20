/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaalsh <hamaalsh@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 21:38:31 by hamaalsh          #+#    #+#             */
/*   Updated: 2026/10/13 21:38:31 by hamaalsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>
int	main(void)
{
    char str1[5] = "";
    char str2[] = "Hello";

    ft_memcpy(str1, str2, sizeof(str2));

    printf("%s", str1);
}

//void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)

