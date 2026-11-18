/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaalsh <hamaalsh@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 20:21:34 by hamaalsh          #+#    #+#             */
/*   Updated: 2026/11/17 20:24:59 by hamaalsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) {

    size_t size;
    char *ptr;
    unsigned int i;

    i = 0;
    size = ft_strlen(s);

    ptr = malloc((size + 1) * sizeof(char));
    if (ptr == NULL)
        return (NULL);

    while (s[i] != '\0') {
        ptr[i] = f(i, s[i]);
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}

