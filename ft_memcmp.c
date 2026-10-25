/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaalsh <hamaalsh@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 15:52:16 by hamaalsh          #+#    #+#             */
/*   Updated: 2026/10/25 15:52:19 by hamaalsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *p_s1;
    unsigned char *p_s2;

    p_s1 = (unsigned char *)s1;
    p_s2 = (unsigned char *)s2;
    i = 0;
    while (i < n)
    {
        if (p_s1[i] == p_s2[i])
            i++;
        return ((unsigned char)p_s1[i] - (unsigned char)p_s2[i]);
    }
    return (0);
}
