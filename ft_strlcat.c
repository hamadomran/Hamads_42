/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaalsh <hamaalsh@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 13:17:11 by hamaalsh          #+#    #+#             */
/*   Updated: 2026/10/17 13:17:28 by hamaalsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t i;
    size_t j;
    i = 0;
    j = 0;

    while (dst[i] != '\0')
        i++;

    if (dstsize > 0)
    {
        while (src[j] && i < dstsize - 1)
        {
            dst[i] = src[j];
            i++;
            j++;
        }
        dst[i] = '\0';
    }
    return (i);
}

