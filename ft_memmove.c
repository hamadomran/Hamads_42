/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaalsh <hamaalsh@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 11:48:17 by hamaalsh          #+#    #+#             */
/*   Updated: 2026/10/25 15:45:33 by hamaalsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;
    unsigned char *p_dst;
    unsigned const char *p_src;
    char tmp[100];

    p_dst = (unsigned char *)dst;
    p_src = (unsigned const char *)src;
    i = 0;

    while (i < len)
    {
        tmp[i] = p_src[i];
        i++;
    }

    i = 0;

    while (i < len)
    {
        p_dst[i] = tmp[i];
        i++;
    }

    return(dst);
}

