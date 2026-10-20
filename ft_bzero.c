/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaalsh <hamaalsh@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 16:22:13 by hamaalsh          #+#    #+#             */
/*   Updated: 2026/10/20 16:22:16 by hamaalsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_bzero(void *s, size_t n)
{
   unsigned char *p;
   size_t i;

   p = (unsigned char *)s;
   i = 0;

   while (i < n) {
      p[i] = 0;
      i++;
   }
}
