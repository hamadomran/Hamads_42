/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaalsh <hamaalsh@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 09:50:24 by hamaalsh          #+#    #+#             */
/*   Updated: 2026/10/17 09:50:24 by hamaalsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
const char *ft_strrchr(const char *s, int c)
{
    int i;
    i = 0;

    while (s[i] != '\0')
        i++;

    while (i >0)
    {
        if (s[i] == c)
            return (&s[i]);
        i--;
    }
    return (NULL);

}
