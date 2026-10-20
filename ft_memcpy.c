/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaalsh <hamaalsh@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:23:25 by hamaalsh          #+#    #+#             */
/*   Updated: 2026/10/20 17:23:29 by hamaalsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t i;
    unsigned char * dst_p;
    unsigned const char * src_p;

    i = 0;
    dst_p = (unsigned char *)dst;
    src_p = (unsigned const char *)src;

    while (i < n)
    {
        dst_p[i] = src_p[i];
        i++;
    }

    return (dst);
}
