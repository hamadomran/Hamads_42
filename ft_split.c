/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaalsh <hamaalsh@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 16:07:19 by hamaalsh          #+#    #+#             */
/*   Updated: 2026/11/17 16:07:26 by hamaalsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char **ft_split(char const *s, char c) {

    int size;
    int i;
    int k;
    int j;
    int j_o;
    int s_count;
    char **ptr;

    k = 0;
    size = 0;
    j_o = 0;
    j = 0;
    i = 0;
    s_count = 0;

    if (s[i] != c && s[i] != '\0')
        s_count++;

    i = 1;
    while (s[i] != '\0') {
        if (s[i] != c && s[i-1] == c)
            s_count++;
        i++;
    }

    ptr = malloc((s_count + 1) * sizeof(char *));

    //We allocated memory for the array of pointers. No we need to go through the string and allocate for each substring(seperated by the delimiter)
    while (s[j] != '\0') {
        if (s[j] != c && s[j-1] == c) {
            size = 0;
            while (s[j] != c && s[j] != '\0') {
                j++;
                size++;
            }
            ptr[k] = malloc(size * sizeof(char));
            k++;
        }
        j++;
    }


}
