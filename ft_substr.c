/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaalsh <hamaalsh@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 19:10:22 by hamaalsh          #+#    #+#             */
/*   Updated: 2026/10/25 19:10:24 by hamaalsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char *ft_substr(char const *s, unsigned int start ,size_t len)
{
    char *substring;
    size_t i;
    unsigned int j;

    substring = malloc(sizeof(char) * len);
    if (substring == NULL)
        return (NULL);

    j = start;
    i = 0;
    while (i < len)
    {
        substring[i] = s[j];
        i++;
        j++;
    }
    return (substring);
}
