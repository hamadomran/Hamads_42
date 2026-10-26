/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaalsh <hamaalsh@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 19:25:24 by hamaalsh          #+#    #+#             */
/*   Updated: 2026/10/25 19:25:28 by hamaalsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    int k;
    int len;
    char *s3;

    j = 0;
    i = 0;
    k = 0;

    while (s1[i] != '\0')
        i++;
    while (s2[j] != '\0')
        j++;

    len  = i + j + 1;
    s3 = malloc(sizeof(char) * len);
    if (s3 == NULL)
        return (NULL);

    while (k < i) {
        s3[k] = s1[k];
        k++;
    }
    k = 0;
    while (k < j) {
        printf("Current state: %s\n", s3);
        s3[k + i] = s2[k];
        k++;
    }
    printf("Final State: %s\n", s3);
    s3[k+i] = '\0';
    return (s3);
}

