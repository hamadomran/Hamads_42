/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaalsh <hamaalsh@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:01:50 by hamaalsh          #+#    #+#             */
/*   Updated: 2026/10/20 17:01:54 by hamaalsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char d;
    unsigned char *p;
    size_t i;

    d = (unsigned char)c;
    p = (unsigned char *)b;
    i = 0;

    while (i < len)
    {
        p[i] = d;
        i++;
    }
    return (b);
}
