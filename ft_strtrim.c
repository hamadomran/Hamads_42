/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaalsh <hamaalsh@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 19:40:05 by hamaalsh          #+#    #+#             */
/*   Updated: 2026/10/25 19:40:08 by hamaalsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    int len;
    int size;
    char *ptr;

    i = 0;
    j = 0;
    len = ft_strlen(s1);

    while (s1[i] != '\0' && ft_strchr(set, s1[i]))
        i++;

    while (len - 1 >= 0 && ft_strchr(set,s1[len - 1]))
        len--;

    size = len - i;

    if (size <= 0)
        size = 0;

    ptr = malloc((size+1)*sizeof(char));
    if (ptr == NULL)
        return (NULL);

    while (j < size) {
        ptr[j] = s1[i];
        j++;
        i++;
    }
    ptr[j]='\0';

    return ptr;
}
